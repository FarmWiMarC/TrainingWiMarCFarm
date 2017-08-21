#include <string.h>
#include <SoftwareSerial.h>
byte data[12];
byte addr[8];

#define rfrxPin 12   //RF rx Pin
#define rftxPin 11   //RF tx Pin
#define resetPin 5   // RESET system Pin
#define rfPin 6      // RF transmitter Pin
#define ledshowPin 13// LED on board Pin

char RFid='B';  //Id of the device

char InputRS232[20]; 
int ValueMT1,ValueMT2,ValueMT3,ValueMT4;
int ValueRF11,ValueRF12,ValueRF13,ValueRF14,ValueRF15,ValueRF16,ValueRF17,ValueRF18;
int ValueRF21,ValueRF22,ValueRF23,ValueRF24,ValueRF25,ValueRF26,ValueRF27,ValueRF28;
int ValueRF31,ValueRF32,ValueRF33,ValueRF34,ValueRF35,ValueRF36,ValueRF37,ValueRF38;
int ValueRF41,ValueRF42,ValueRF43,ValueRF44,ValueRF45,ValueRF46,ValueRF47,ValueRF48;
int ValueRF51,ValueRF52,ValueRF53,ValueRF54,ValueRF55,ValueRF56,ValueRF57,ValueRF58;
int ValueRF61,ValueRF62,ValueRF63,ValueRF64,ValueRF65,ValueRF66,ValueRF67,ValueRF68;
int ValueRF71,ValueRF72,ValueRF73,ValueRF74,ValueRF75,ValueRF76,ValueRF77,ValueRF78;
int ValueRF81,ValueRF82,ValueRF83,ValueRF84,ValueRF85,ValueRF86,ValueRF87,ValueRF88;
int ValueRF91,ValueRF92,ValueRF93,ValueRF94,ValueRF95,ValueRF96,ValueRF97,ValueRF98;

int ValueRFA1,ValueRFA2,ValueRFA3,ValueRFA4,ValueRFA5,ValueRFA6,ValueRFA7,ValueRFA8;
int ValueRFB1,ValueRFB2,ValueRFB3,ValueRFB4,ValueRFB5,ValueRFB6,ValueRFB7,ValueRFB8;



int v1,v2,v3,v4,v5,v6,v7,v8;
int Data1,Data2,Data3,WindD;
long tempT,RH,Lux,moisture,soiltemp;
//Addresses

int randperiod=2;

long vIn0,vIn1,vIn2,vIn3,vIn4,vIn5,vIn6,vIn7;
int angle;
float OldTime;
int voltref=500;
int voltoffset=0;
float timecount =0;
float reftime =0;
char InputRPI[20];
char ValueSensor[20];
char ValueSensorRF[20];
int indexchar;
//Anometer
volatile unsigned int windRotation = 0;
//Used for timing
float windTimer = 0;
float windDtime = 0;

unsigned long lastvalue;
unsigned long Supvoltage,Windvoltage;

int sensorPin = 1; 
int loopcount;
int inputcount=0;
byte CurrentDisplayPage = 0;

String inputString = "";         // a string to hold incoming data
boolean stringComplete = false;  // whether the string is complete
boolean FlagShutdown=false;
boolean FlagStart=false;
boolean FlagRF=true;
int RHint;
long temp;
SoftwareSerial rfSerial =  SoftwareSerial(rfrxPin, rftxPin);
//////////////////////////////////////
////////////////////////////////////////////////////////////
/////////////// Send RF /////////////////////////////

void ProcessConvertValueToRF(char measPoint,char modeID,int value1,int value2, int value3, int value4)
{ 
char head, Data1,Data2,Data3,i,chartemp1,chartemp2,chartemp3,chartemp4;
   int tmp;

 i=0;for (i=0;i<20;i++)    {  ValueSensor[i]=0; };

ValueSensorRF[0] = 0x50; //"P"
if (modeID == 'B')ValueSensorRF[0] = 'Q';
if (modeID == 'V')ValueSensorRF[0] = 'V';
head=ValueSensorRF[0];
ValueSensorRF[1] = measPoint;
 value1=1000+value1;
 value3=1000+value3;
 value2=1000+value2;
value4=1000+value4;


 
  tmp = value1 & 0xff00;
  tmp >>= 8;
  Data1 = tmp;
   
 
 
  tmp = value1 & 0x00ff;
  Data2 = tmp;
 //  Data2 = 0xec;
 Data3=Data1+Data2;

 
ValueSensorRF[2] = Data1;
ValueSensorRF[3] = Data2;
chartemp1=Data1+Data2;
  tmp = value2 & 0xff00;
  tmp >>= 8;
  Data1 = tmp;
   
 
 
  tmp = value2 & 0x00ff;
  Data2 = tmp;
 
 ValueSensorRF[4] = Data1;
ValueSensorRF[5] = Data2;
chartemp2=Data1+Data2;
 ValueSensorRF[6] = measPoint+chartemp1+chartemp2;


   tmp = value3 & 0xff00;
  tmp >>= 8;
  Data1 = tmp;
  
  tmp = value3 & 0x00ff;
  Data2 = tmp;
// Data3=Data1+Data2;


ValueSensorRF[7] = Data1;
ValueSensorRF[8] = Data2;
chartemp3=Data1+Data2;
  tmp = value4 & 0xff00;
  tmp >>= 8;
  Data1 = tmp;
  
  tmp = value4 & 0x00ff;
  Data2 = tmp;
// Data3=Data1+Data2;


ValueSensorRF[9] = Data1;
ValueSensorRF[10] = Data2;
chartemp4=Data1+Data2;

 ValueSensorRF[11] = measPoint+chartemp3+chartemp4;

ValueSensorRF[12]= head+measPoint+chartemp1+chartemp2+measPoint+chartemp3+chartemp4;;

digitalWrite(rfPin, HIGH); // output pin 13
 for (i=1;i<20;i++)
 {
 rfSerial.println(ValueSensorRF);
 delay(10);
  
 }
digitalWrite(rfPin, LOW); // output pin 13

}


void ProcessSendESP(char idex)
{ 
int i;
//int Data1,Data2,Data3;
   int tmp;
char sum1,sum2,sum3,sum4,sum5,sum6,sum7,sum8;
ValueSensor[0] = 'P';
ValueSensor[1] = idex;
//////////////////v1 Send

 
 tmp =v1+1000; 
  tmp = tmp & 0xff00;
  tmp >>= 8; 
  Data1 = tmp;

  
 tmp =v1+1000; 
 
  tmp = tmp & 0x00ff;
  Data2 = tmp;



  
sum1=idex+Data1+Data2;
Data3=Data1+Data2;


//Data1='A';

ValueSensor[2] = Data1;
ValueSensor[3] = Data2;
ValueSensor[4] = sum1;

//////////////////v2 Send
  tmp =v2+1000; 
  tmp = tmp & 0xff00;
  tmp >>= 8; 
  Data1 = tmp;

  
 tmp =v2+1000; 
 
  tmp = tmp & 0x00ff;
  Data2 = tmp;
  
sum2=idex+Data1+Data2;

Data3=Data1+Data2;
ValueSensor[5] = Data1;
ValueSensor[6] = Data2;
ValueSensor[7] = sum2;
//////////////////v3 Send
  tmp =v3+1000; 
  tmp = tmp & 0xff00;
  tmp >>= 8; 
  Data1 = tmp;

  
 tmp =v3+1000; 
 
  tmp = tmp & 0x00ff;
  Data2 = tmp;
sum3=idex+Data1+Data2;


Data3=Data1+Data2;

ValueSensor[8] = Data1;
ValueSensor[9] = Data2;
ValueSensor[10] = sum3;
//////////////////v4 Send
 tmp =v4+1000; 
  tmp = tmp & 0xff00;
  tmp >>= 8; 
  Data1 = tmp;

  
 tmp =v4+1000; 
 
  tmp = tmp & 0x00ff;
  Data2 = tmp;
sum4=idex+Data1+Data2;
Data3=Data1+Data2;
ValueSensor[11] = Data1;
ValueSensor[12] = Data2;
ValueSensor[13] =sum4;
//////////////////v5 Send
  tmp =v5+1000; 
  tmp = tmp & 0xff00;
  tmp >>= 8; 
  Data1 = tmp;

  
 tmp =v5+1000; 
 
  tmp = tmp & 0x00ff;
  Data2 = tmp;
sum5=idex+Data1+Data2;
Data3=Data1+Data2;
ValueSensor[14] = Data1;
ValueSensor[15] = Data2;
ValueSensor[16] = sum5;
//////////////////v6 Send
 tmp =v6+1000; 
  tmp = tmp & 0xff00;
  tmp >>= 8; 
  Data1 = tmp;

  
 tmp =v6+1000; 
 
  tmp = tmp & 0x00ff;
  Data2 = tmp;
sum6=idex+Data1+Data2;
Data3=Data1+Data2;
ValueSensor[17] = Data1;
ValueSensor[18] = Data2;
ValueSensor[19] =sum6;
//////////////////v7 Send
 tmp =v7+1000; 
  tmp = tmp & 0xff00;
  tmp >>= 8; 
  Data1 = tmp;

  
 tmp =v7+1000; 
 
  tmp = tmp & 0x00ff;
  Data2 = tmp;
sum7=idex+Data1+Data2;
Data3=Data1+Data2;
ValueSensor[20] = Data1;
ValueSensor[21] = Data2;
ValueSensor[22] = sum7;
//////////////////v8 Send
 tmp =v8+1000; 
  tmp = tmp & 0xff00;
  tmp >>= 8; 
  Data1 = tmp;

  
 tmp =v8+1000; 
 
  tmp = tmp & 0x00ff;
  Data2 = tmp;
sum8=idex+Data1+Data2;

Data3=Data1+Data2;
ValueSensor[23] = Data1;
ValueSensor[24] = Data2;
ValueSensor[25] = sum8;


//ValueSensor[26]=ValueSensor[1]+ValueSensor[4]+ValueSensor[7]+ValueSensor[10]+ValueSensor[13]+ValueSensor[16]+ValueSensor[19]+ValueSensor[22]+ValueSensor[25];
ValueSensor[26]=idex+sum1+sum2+sum3+sum4+sum5+sum6+sum7+sum8;//
 
ValueSensor[27]='\n';

//for (i=1;i<30;i++) { Serial.print(ValueSensor[i],HEX); Serial.print(','); }   
for (i=0;i<30;i++) { Serial.print(ValueSensor[i]);}// Serial.print(','); } 
//Serial.println(ValueSensor);




}







//////////////////////////////////





void setup()
{ 
 Serial.begin(9600);
 pinMode(rfrxPin, INPUT);
 pinMode(rftxPin, OUTPUT);
 pinMode(ledshowPin, OUTPUT);
 pinMode(resetPin, OUTPUT); // output
 pinMode(rfPin, OUTPUT);
  rfSerial.begin(2400);// set the data rate for the SoftwareSerial port
  delay(2000);
 
    digitalWrite(resetPin, LOW); //reset output pin 5
    digitalWrite(rfPin, LOW); // RF output pin 6
    loopcount=0;
    RHint=0;
    temp=0;
    reftime = millis(); //set reference time     

 ///Read reference input voltage///////////////////     
    vIn0 = analogRead(0);
    vIn0 = vIn0*voltref;
    vIn0 = vIn0/102.3-voltoffset;

    vIn1 = analogRead(1); 
    vIn1 = vIn1*voltref;
    vIn1 = vIn1/102.3-voltoffset;

    vIn2 = analogRead(2); 
    vIn2 = vIn2*voltref;
    vIn2 = vIn2/102.3-voltoffset;
 
    vIn3 = analogRead(3); 
    vIn3 = vIn3*voltref;
    vIn3 = vIn3/102.3-voltoffset;

    vIn4 = analogRead(4); 
    vIn4 = vIn4*voltref;
    vIn4 = vIn4/102.3-voltoffset;

    vIn5 = analogRead(5); 
    vIn5 = vIn5*voltref;
    vIn5 = vIn5/102.3-voltoffset;

    vIn6 = analogRead(6); 
    vIn6 = vIn6*voltref;
    vIn6 = vIn6/102.3-voltoffset;


    Supvoltage = analogRead(7);
    Supvoltage = Supvoltage*voltref;
    Supvoltage = Supvoltage/102.3-voltoffset;
    Supvoltage = Supvoltage*11+700;

 v1=vIn0;
  v2= vIn1;  
  v3=vIn2;
  v4==vIn3;
  v5=vIn4;
  v6=vIn5;
  v7=vIn6;
  v8=Supvoltage; 


  Serial.print("RF send: "); Serial.print(RFid);  Serial.print(": Group A "); Serial.println();
                  digitalWrite(ledshowPin, HIGH);
      int i;        
         for (i=1;i<3;i++){
  
                          ProcessConvertValueToRF(RFid,'A',v1,v2,v3,v4);

                          delay(100);
         }delay(3000);

       Serial.print("RF send: "); Serial.print(RFid);  Serial.print(": Group B "); Serial.println();
                  digitalWrite(ledshowPin, HIGH);
              
         for (i=1;i<3;i++){
  
                          ProcessConvertValueToRF(RFid,'B',v5,v6,v7,v8);

                          delay(100);
                          }
                  digitalWrite(ledshowPin, LOW);                        
 
 }

void loop() { 
int i;
///////////////////// RF send randomly ///////////////////////////
int   randNumber=random(100);Serial.print("Random Number:"); Serial.println(randNumber); 

    if( ((randNumber) % randperiod) == 0)
    { 
                  if (FlagRF)
                  {  
                  Serial.print("RF send: "); Serial.print(RFid);  Serial.print(": Group A "); Serial.println();
                 
              
         for (i=1;i<3;i++){
                  digitalWrite(ledshowPin, HIGH);
                          ProcessConvertValueToRF(RFid,'A',vIn0,vIn1,vIn2,vIn3);

                          delay(100);
                  digitalWrite(ledshowPin, LOW);
                          }
                  FlagRF=false;
                  }
                  else
                   
                  { 
                  Serial.print("RF send: "); Serial.print(RFid);  Serial.print(": Group B "); Serial.println();
                  
              
         for (i=1;i<3;i++){
                          digitalWrite(ledshowPin, HIGH);
                          ProcessConvertValueToRF(RFid,'B',vIn4,vIn5,vIn6,Supvoltage);

                          delay(100);
                          digitalWrite(ledshowPin, LOW);
                          }
                  FlagRF=true;
                  }
    }
 /////////check Serial input /////////////////////////////////////////////////////// 
  
   if (stringComplete) 
   {
     //inputString.toCharArray(InputRPI, 15);
         Serial.print("serial input = "); Serial.println(InputRPI); 
    if ((InputRPI[1] == 'T')|| ((InputRPI[1] == 'S'))) //check input and reset counter
       {
       inputcount =0;
       }
    if ((InputRPI[0] == 'P')&&(InputRPI[1] == 'S')) /// check input and reset all input value and reference time
    
       {  
       int i;       
          for (i=1;i<10;i++)
          {
       Serial.println(InputRPI); delay(500);// send to other device 
          }
       
        loopcount =1; 
       ValueMT1=0;ValueMT2=0;ValueMT3=0;ValueMT4=0;
       ValueRF11=0;ValueRF12=0;ValueRF13=0;ValueRF14=0;ValueRF15=0;ValueRF16=0;ValueRF17=0;ValueRF18=0;
       ValueRF21=0;ValueRF22=0;ValueRF23=0;ValueRF24=0;ValueRF25=0;ValueRF26=0;ValueRF27=0;ValueRF28=0;
       ValueRF31=0;ValueRF32=0;ValueRF33=0;ValueRF34=0; ValueRF35=0;ValueRF36=0;ValueRF37=0;ValueRF38=0;
       ValueRF41=0;ValueRF42=0;ValueRF43=0;ValueRF44=0;ValueRF45=0;ValueRF46=0;ValueRF47=0;ValueRF48=0;

       ValueRF51=0;ValueRF52=0;ValueRF53=0;ValueRF54=0;ValueRF55=0;ValueRF56=0;ValueRF57=0;ValueRF58=0;
       ValueRF61=0;ValueRF62=0;ValueRF63=0;ValueRF64=0;ValueRF65=0;ValueRF66=0;ValueRF67=0;ValueRF68=0;
       ValueRF71=0;ValueRF72=0;ValueRF73=0;ValueRF74=0;ValueRF75=0;ValueRF76=0;ValueRF77=0;ValueRF78=0;
       ValueRF81=0;ValueRF82=0;ValueRF83=0;ValueRF84=0;ValueRF85=0;ValueRF86=0;ValueRF87=0;ValueRF88=0;
       ValueRF91=0;ValueRF92=0;ValueRF93=0;ValueRF94=0;ValueRF95=0;ValueRF96=0;ValueRF97=0;ValueRF98=0;
       ValueRFA1=0;ValueRFA2=0;ValueRFA3=0;ValueRFA4=0;ValueRFA5=0;ValueRFA6=0;ValueRFA7=0;ValueRFA8=0;  
       ValueRFB1=0;ValueRFB2=0;ValueRFB3=0;ValueRFB4=0;ValueRFB5=0;ValueRFB6=0;ValueRFB7=0;ValueRFB8=0;  


      reftime =millis();
   
     }
  
    
    
    // clear the string:
    inputString = "";
    stringComplete = false;
  }
  
    
    
    timecount = (millis()-reftime)/1000; 
    loopcount++;
    inputcount++;
   Serial.print("inputcount =");  Serial.println(inputcount);
   Serial.print("timecount =");  Serial.println(timecount);

    int timecountint=int(timecount);

  
  if (inputcount >20)  // check the input 
     {
   
    digitalWrite(resetPin, LOW); // output pin 13
    delay(5000);
    digitalWrite(resetPin, HIGH); // output pin 13
   // loopcount =0;
    inputcount =0; 
    loopcount=0;
    
  }


///////////////////////////////////////////////////////////////   
         
// Humidity measurement    at vIn0   
  
///////////////////////////////////////////////////////////////  

 lastvalue=vIn0;


  vIn0 = analogRead(0);
 vIn0 = vIn0*voltref;
 vIn0 = vIn0/102.3-voltoffset;
 
 vIn0 = (vIn0+lastvalue)/2;
 
// RH = ((vIn0)-800)/0.31;
RH= (1250*vIn0)/voltref-1250;
if (RH > 10000)
RH=10000;
 
 tempT = (vIn0*2187.5)/voltref-6687.5;
 Serial.print("Temp  ="); Serial.print(tempT,1); Serial.println(" C");
 

 
 Serial.print("Humid =");Serial.print(RH); Serial.println(" %"); 

  delay(500);
  ReadDataFromRF();
  delay(500);
  ReadDataFromRF();  
  delay(500);     
 
/////////////////////////////////////////////////////////////////////

// ambient temperature measurement at vIn1

//////////////////////////////////////////////////////////////////// 

 lastvalue=vIn1;
 vIn1 = analogRead(1); 
 vIn1 = vIn1*voltref;
 vIn1 = vIn1/102.3-voltoffset;
  vIn1 = (vIn1+lastvalue)/2;
  RH= (1250*vIn1)/voltref-1250;
if (RH > 10000)
RH=10000;
Serial.print("Humid =");Serial.print(RH); Serial.println(" %"); 
  

 
 ReadDataFromRF();
 delay(500);
 ReadDataFromRF();  
 delay(500);     


/////////////////////////////////////////////////////////////////////

// Lux measurement at vIn3

//////////////////////////////////////////////////////////////////// 

 lastvalue=vIn3;
 vIn3 = analogRead(3); 
 vIn3 = vIn3*voltref;
 vIn3 = vIn3/102.3-voltoffset;
 
 
 vIn3 = (vIn3+lastvalue)/2;
 Lux = (vIn3*100) /440;
 
  Serial.print("Lux  ="); Serial.print(Lux,1); Serial.println(" kLux");
 
 
  delay(500);
 
  ReadDataFromRF();
  delay(500);
  ReadDataFromRF();  
  delay(500);     
  v1=vIn0;
  v2= vIn1;  
  v3=vIn2;
  v4==vIn3;
  v5=vIn4;
  v6=vIn5;
  v7=vIn6;
  v8=Supvoltage; 
 
ProcessSendESP('V');
/////////////////////////////////////////////////////////////////////

// vIn4
//
//////////////////////////////////////////////////////////////////// 



 lastvalue=vIn4;

 
vIn4 = analogRead(4); 
 vIn4 = vIn4*voltref;
vIn4 = vIn4/102.3-voltoffset;
 
 
  //int temp=(int)(temperatureC*10);
 
   vIn4 = (vIn4+lastvalue)/2;
  
 delay(500);
 
ReadDataFromRF();
 delay(500);
     ReadDataFromRF();  
     delay(500);     


/////////////////////////////////////////////////////////////////////

//
//vIn5
//////////////////////////////////////////////////////////////////// 



 lastvalue=vIn5;

 
vIn5 = analogRead(5); 
 vIn5 = vIn5*voltref;
vIn5 = vIn5/102.3-voltoffset;
 
 
  //int temp=(int)(temperatureC*10);
 
   vIn5 = (vIn5+lastvalue)/2;
   moisture = 3600-(vIn5*1.5);
  Serial.print("Moisture  ="); Serial.print(moisture,1); Serial.println(" %");
 
   ReadDataFromRF();
   delay(500);
   ReadDataFromRF();  
   delay(500);     


/////////////////////////////////////////////////////////////////////

//
// vIn6
//////////////////////////////////////////////////////////////////// 



 lastvalue=vIn6;

 
 vIn6 = analogRead(6); 
 vIn6 = vIn6*voltref;
 vIn6 = vIn6/102.3-voltoffset;
  soiltemp = (vIn6 - 500) /0.1;
 Serial.print("soil Temp  =");  Serial.print(soiltemp,1); Serial.println(" C");
  ReadDataFromRF();
  delay(500);
  ReadDataFromRF();  
  delay(500);     

v1=tempT;        
v2=RH;            
v3=Lux;       
v4=0;
v5=moisture;        
    
v6=soiltemp;      
v7=0;       
v8=Supvoltage;        


ProcessSendESP('M');
Serial.print("Header:");Serial.println("M");
Serial.print("v1:");Serial.println(v1);
Serial.print("v2:");Serial.println(v2);
Serial.print("v3:");Serial.println(v3);
Serial.print("v4:");Serial.println(v4);
Serial.print("v5:");Serial.println(v5);
Serial.print("v6:");Serial.println(v6);
Serial.print("v7:");Serial.println(v7);
Serial.print("v8:");Serial.println(v8);
 delay(1000);
  
   
   //////////////////////////////////////////////////////////////
   
  // Supply measurement....................
 
 //////////////////////////////////////////////////////////////////
 
 
  lastvalue=Supvoltage;

  Supvoltage = analogRead(7);
 Supvoltage = Supvoltage*voltref;
Supvoltage = Supvoltage/102.3-voltoffset;
Supvoltage = Supvoltage*11+700;
 

 
   Supvoltage = (Supvoltage+lastvalue)/2;
   
 ReadDataFromRF();
 delay(500);
 ReadDataFromRF();  
 delay(500);     
  v1=vIn0;
  v2= vIn1;  
  v3=vIn2;
  v4==vIn3;
  v5=vIn4;
  v6=vIn5;
  v7=vIn6;
  v8=Supvoltage; 
 
ProcessSendESP('V');
Serial.print("Header:");Serial.println("V");
Serial.print("v1:");Serial.println(v1);
Serial.print("v2:");Serial.println(v2);
Serial.print("v3:");Serial.println(v3);
Serial.print("v4:");Serial.println(v4);
Serial.print("v5:");Serial.println(v5);
Serial.print("v6:");Serial.println(v6);
Serial.print("v7:");Serial.println(v7);
Serial.print("v8:");Serial.println(v8);
 delay(1000);
    
} 





void Wind_Init(void)
{
  pinMode(3, INPUT);
  attachInterrupt(1, windSpeed, RISING);
  windTimer=millis();//start timing  
  
}



int Wind_GetSpeed(void)
{
  /*
  The cup-type anemometer measures wind speed by closing a contact as 
  a magnet moves past a switch.  A wind speed of 1.492 MPH (2.4 km/h) 
  causes the switch to close once per second.
  */ 
  
  //Check using Interrupt
  float windSpeed = 0;
  
  windDtime =  millis()-windTimer;
  windTimer = millis();
  windDtime = windDtime/1000;
 //  Serial.print("windDtime =              ");
  //    Serial.print(windDtime);    
  //    Serial.println("  "); 
  
  windSpeed = windRotation*100/windDtime;//rotation per second
 //  windSpeed = windRotation/windDtime;//rotation per second
   Serial.print("windRotation =           ");
      Serial.print(windRotation);    
 //     Serial.println("  ");   
  windRotation = 0;  
  windSpeed = windSpeed*2/3;//1 rotation per second equals 2.4 km/h = 2/3 m/s
  return int(windSpeed); 
}

void windSpeed()
{
  windRotation++;
}



/////////////////////////////////////////////////////////////
/////////////Serial
////////////////////////////////////////////////////////
void serialEvent() {
int i,j;     
     for (i=1;i<500;i++){ 
   InputRPI[0] = (char)Serial.read(); 
   
     if (InputRPI[0] == 'P') 
     { //InputRPI[0]=inChar
    for (j=1;j<20;j++){  InputRPI[j] = Serial.read(); }  
 
 if ((InputRPI[0] == 'P') )
{stringComplete=true;
i=1000;
}

      }

      }
     
 //      ReadDataFromRF();
       inputString ="";  
  
}
  

//////////////////////////////////////////////////////////////
/////////RF input
/////////////////////////////////////////////////
      

boolean FillDataAndDisplay_SepAB(int measPoint)
{char i,data[3],s1,s2,s3,s4,s5,s6,s7;
 
 int tmp;
 
 i=0;
  
  s1=InputRS232[2]+InputRS232[3];
  s2=InputRS232[4]+InputRS232[5];
  s3=InputRS232[1]+s1+s2;
  s4=InputRS232[7]+InputRS232[8];
  s5=InputRS232[9]+InputRS232[10];
  s6=InputRS232[1]+s4+s5;
  s7=InputRS232[0]+s3+s6;

 if ((InputRS232[6] == s3) && (InputRS232[11] == s6)&& (InputRS232[12] == s7))
{// FlagSearch =1;
// return false;
 digitalWrite(ledshowPin, HIGH);
 delay(500);
 digitalWrite(ledshowPin, LOW);
    ValueMT1 =0;
    ValueMT2=0 ;
      ValueMT3=0 ;
    ValueMT4=0;
 
 
 data[0]=InputRS232[2];
 data[1]=InputRS232[3];
   
  tmp = data[0];
  tmp <<= 8;
  tmp &= 0xff00;//
  ValueMT1=data[1];
 
  ValueMT1 &= 0x00ff;
  ValueMT1 |= tmp;   
  
  ValueMT1 =(ValueMT1-1000);
  
  data[0]=InputRS232[4];
   data[1]=InputRS232[5];
   
   tmp = data[0];
  tmp <<= 8;
  tmp &= 0xff00;//
  ValueMT2=data[1];
 
 ValueMT2 &= 0x00ff;
  ValueMT2 |= tmp;   
 ValueMT2=(ValueMT2-1000) ;
 ///////////////////////////////////////////
 data[0]=InputRS232[7];
   data[1]=InputRS232[8];
   
    tmp = data[0];
  tmp <<= 8;
  tmp &= 0xff00;//
  ValueMT3=data[1];
 
  ValueMT3 &= 0x00ff;
  ValueMT3 |= tmp;   
  
  ValueMT3 =(ValueMT3-1000);
  
  data[0]=InputRS232[9];
   data[1]=InputRS232[10];
   
   tmp = data[0];
  tmp <<= 8;
  tmp &= 0xff00;//
  ValueMT4=data[1];
 
 ValueMT4 &= 0x00ff;
  ValueMT4 |= tmp;   
 ValueMT4=(ValueMT4-1000) ;
// Serial.print("Header=");  Serial.print(InputRS232[0]);
 digitalWrite(ledshowPin, HIGH);
 Serial.print(" Group=");  Serial.print(InputRS232[1]);
 if (InputRS232[0]=='P') Serial.println(" 1");if (InputRS232[0]=='Q') Serial.println(" 2");
 Serial.print("1 =");  Serial.print(ValueMT1);
  Serial.print("    2=");  Serial.println(ValueMT2);
   Serial.print("3 =");  Serial.print(ValueMT3);
  Serial.print("    4=");  Serial.println(ValueMT4);
  delay(100);
 digitalWrite(ledshowPin, LOW); 
 return true;
 
 
 } 
 else 
 return false;
 
}
 
void ReadDataFromRF()
{
int i,j;
  for (i=1;i<1000;i++){ 
 char c = rfSerial.read();
  if ((c == 'P')||(c == 'Q'))
   {
   
   InputRS232[0]=c;
   for (j=1;j<20;j++){ c = rfSerial.read(); InputRS232[j]=c;}
 
   //  Serial.print("RF:");Serial.print(InputRS232[0]);Serial.print(InputRS232[1]);Serial.print(',');
   //  for (i=2;i<20;i++) { Serial.print(InputRS232[i],HEX); Serial.print(','); }  
   //  Serial.println();
 
 if (FillDataAndDisplay_SepAB(1))
  { 
   
    
   inputcount=0; 
   i=4000;
  if (InputRS232[0]=='P')
  {
   switch (InputRS232[1]) {
    case 'A':    
      ValueRF11 = ValueMT1;ValueRF12=ValueMT2;ValueRF13 = ValueMT3;ValueRF14=ValueMT4;
      v1=ValueRF11;        
      v2=ValueRF12;            
      v3=ValueRF13;       
      v4=ValueRF14;        
      v5= ValueRF15;    
      v6=ValueRF16;       
      v7=ValueRF17;       
      v8=ValueRF18; 
       ProcessSendESP('A');  delay(500);  
      
      break;
    case 'B':    
      ValueRF21 = ValueMT1;ValueRF22=ValueMT2; ValueRF23 = ValueMT3;ValueRF24=ValueMT4;
      v1=ValueRF21;        
      v2=ValueRF22;            
      v3=ValueRF23;       
      v4=ValueRF24;        
      v5= ValueRF25;    
      v6=ValueRF26;       
      v7=ValueRF27;       
      v8=ValueRF28; 
       ProcessSendESP('B');  delay(500);  
     break;
    case 'C':    
       ValueRF31 = ValueMT1;ValueRF32=ValueMT2;ValueRF33 = ValueMT3;ValueRF34=ValueMT4;
       v1=ValueRF31;        
      v2=ValueRF32;            
      v3=ValueRF33;      
      v4=ValueRF34;        
      v5= ValueRF35;    
      v6=ValueRF36;       
      v7=ValueRF37;       
      v8=ValueRF38; 
       ProcessSendESP('C');  delay(500);  
     break;
    case 'D':    
       ValueRF41 = ValueMT1;ValueRF42=ValueMT2;ValueRF43 = ValueMT3;ValueRF44=ValueMT4;
       v1=ValueRF41;        
      v2=ValueRF42;            
      v3=ValueRF43;       
      v4=ValueRF44;        
      v5= ValueRF45;    
      v6=ValueRF46;       
      v7=ValueRF47;       
      v8=ValueRF48; 
       ProcessSendESP('D');  delay(500);  
     break;
    case 'E':    
       ValueRF51 = ValueMT1;ValueRF52=ValueMT2;ValueRF53 = ValueMT3;ValueRF54=ValueMT4;
     v1=ValueRF51;        
      v2=ValueRF52;            
      v3=ValueRF53;       
      v4=ValueRF54;        
      v5= ValueRF55;    
      v6=ValueRF56;       
      v7=ValueRF57;       
      v8=ValueRF58; 
       ProcessSendESP('E');  delay(500);  
    
      break;
    case 'F':   
       
       ValueRF61 = ValueMT1;ValueRF62=ValueMT2;ValueRF63 = ValueMT3;ValueRF64=ValueMT4;
      v1=ValueRF61;        
      v2=ValueRF62;            
      v3=ValueRF63;       
      v4=ValueRF64;        
      v5= ValueRF65;    
      v6=ValueRF66;       
      v7=ValueRF67;       
      v8=ValueRF68; 
       ProcessSendESP('F');  delay(500);  
     
     break;
    case 'G':    
       ValueRF71 = ValueMT1;ValueRF72=ValueMT2;ValueRF73 = ValueMT3;ValueRF74=ValueMT4;
      v1=ValueRF71;        
      v2=ValueRF72;            
      v3=ValueRF73;       
      v4=ValueRF74;        
      v5= ValueRF75;    
      v6=ValueRF76;       
      v7=ValueRF77;       
      v8=ValueRF78; 
       ProcessSendESP('G');  delay(500);  
     break;       
    case 'H':    
       ValueRF81 = ValueMT1;ValueRF82=ValueMT2;ValueRF83 = ValueMT3;ValueRF84=ValueMT4;
       v1=ValueRF81;        
      v2=ValueRF82;            
      v3=ValueRF83;       
      v4=ValueRF84;        
      v5= ValueRF85;    
      v6=ValueRF86;       
      v7=ValueRF87;       
      v8=ValueRF88; 
       ProcessSendESP('H');  delay(500);   
     break;
    case 'I':    
       ValueRF91 = ValueMT1;ValueRF92=ValueMT2;ValueRF93 = ValueMT3;ValueRF94=ValueMT4;
     v1=ValueRF91;        
      v2=ValueRF92;            
      v3=ValueRF93;       
      v4=ValueRF94;        
      v5= ValueRF95;    
      v6=ValueRF96;       
      v7=ValueRF97;       
      v8=ValueRF98; 
       ProcessSendESP('I');  delay(500);  
     
      break; 
    case 'J':    
       ValueRFA1 = ValueMT1;ValueRFA2=ValueMT2;ValueRFA3 = ValueMT3;ValueRFA4=ValueMT4;
      v1=ValueRFA1;        
      v2=ValueRFA2;            
      v3=ValueRFA3;       
      v4=ValueRFA4;        
      v5= ValueRFA5;    
      v6=ValueRFA6;       
      v7=ValueRFA7;       
      v8=ValueRFA8; 
       ProcessSendESP('J');  delay(500);  
     break; 
    case 'K':    
       ValueRFB1 = ValueMT1;ValueRFB2=ValueMT2;ValueRFB3 = ValueMT3;ValueRFB4=ValueMT4;
      v1=ValueRFB1;        
      v2=ValueRFB2;            
      v3=ValueRFB3;       
      v4=ValueRFB4;        
      v5= ValueRFB5;    
      v6=ValueRFB6;       
      v7=ValueRFB7;       
      v8=ValueRFB8; 
       ProcessSendESP('K');  delay(500);  
     break;        
        
   
   }//switch (InputRS232[1])

 break;
  } //if (InputRS232[0]=='P')
 
if ((InputRS232[0] == 'Q'))
  { 
  switch (InputRS232[1]) {
    case 'A': 
   ValueRF15 = ValueMT1;ValueRF16=ValueMT2;ValueRF17 = ValueMT3;ValueRF18=ValueMT4;
   v1=ValueRF11;        
      v2=ValueRF12;            
      v3=ValueRF13;       
      v4=ValueRF14;        
      v5= ValueRF15;    
      v6=ValueRF16;       
      v7=ValueRF17;       
      v8=ValueRF18; 
       ProcessSendESP('A');  delay(500);  
   
     break;
    case 'B':    
      ValueRF25 = ValueMT1;ValueRF26=ValueMT2; ValueRF27 = ValueMT3;ValueRF28=ValueMT4;
      v1=ValueRF21;        
      v2=ValueRF22;            
      v3=ValueRF23;       
      v4=ValueRF24;        
      v5= ValueRF25;    
      v6=ValueRF26;       
      v7=ValueRF27;       
      v8=ValueRF28; 
       ProcessSendESP('B');  delay(500);  
      break;
    case 'C':    
       ValueRF35 = ValueMT1;ValueRF36=ValueMT2; ValueRF37 = ValueMT3;ValueRF38=ValueMT4;
      v1=ValueRF31;        
      v2=ValueRF32;            
      v3=ValueRF33;      
      v4=ValueRF34;        
      v5= ValueRF35;    
      v6=ValueRF36;       
      v7=ValueRF37;       
      v8=ValueRF38; 
       ProcessSendESP('C');  delay(500); 
      break;
    case 'D':    
       ValueRF45 = ValueMT1;ValueRF46=ValueMT2; ValueRF47 = ValueMT3;ValueRF48=ValueMT4;
      v1=ValueRF41;        
      v2=ValueRF42;            
      v3=ValueRF43;       
      v4=ValueRF44;        
      v5= ValueRF45;    
      v6=ValueRF46;       
      v7=ValueRF47;       
      v8=ValueRF48; 
       ProcessSendESP('D');  delay(500);  
     break;
    case 'E':    
       ValueRF55 = ValueMT1;ValueRF56=ValueMT2; ValueRF57 = ValueMT3;ValueRF58=ValueMT4;
    //  ValueRF51 = ValueMT1;ValueRF52=ValueMT2;ValueRF53 = ValueMT3;ValueRF54=ValueMT4;
     v1=ValueRF51;        
      v2=ValueRF52;            
      v3=ValueRF53;       
      v4=ValueRF54;        
      v5= ValueRF55;    
      v6=ValueRF56;       
      v7=ValueRF57;       
      v8=ValueRF58; 
       ProcessSendESP('E');  delay(500);  
      break;
    case 'F':    
       ValueRF65 = ValueMT1;ValueRF66=ValueMT2; ValueRF67 = ValueMT3;ValueRF68=ValueMT4;
       v1=ValueRF61;        
      v2=ValueRF62;            
      v3=ValueRF63;       
      v4=ValueRF64;        
      v5= ValueRF65;    
      v6=ValueRF66;       
      v7=ValueRF67;       
      v8=ValueRF68; 
       ProcessSendESP('F');  delay(500);  
      break;
    case 'G':    
       ValueRF75 = ValueMT1;ValueRF76=ValueMT2; ValueRF77 = ValueMT3;ValueRF78=ValueMT4;
    
      v1=ValueRF71;        
      v2=ValueRF72;            
      v3=ValueRF73;       
      v4=ValueRF74;        
      v5= ValueRF75;    
      v6=ValueRF76;       
      v7=ValueRF77;       
      v8=ValueRF78; 
       ProcessSendESP('G');  delay(500);  
    
     break;
    case 'H':    
       ValueRF85 = ValueMT1;ValueRF86=ValueMT2; ValueRF87 = ValueMT3;ValueRF88=ValueMT4;
      v1=ValueRF81;        
      v2=ValueRF82;            
      v3=ValueRF83;       
      v4=ValueRF84;        
      v5= ValueRF85;    
      v6=ValueRF86;       
      v7=ValueRF87;       
      v8=ValueRF88; 
       ProcessSendESP('H');  delay(500);   
      break;   
    case 'I':    
       ValueRF95 = ValueMT1;ValueRF96=ValueMT2; ValueRF97 = ValueMT3;ValueRF98=ValueMT4;
     v1=ValueRF91;        
      v2=ValueRF92;            
      v3=ValueRF93;       
      v4=ValueRF94;        
      v5= ValueRF95;    
      v6=ValueRF96;       
      v7=ValueRF97;       
      v8=ValueRF98; 
       ProcessSendESP('I');  delay(500);  
      break;
     case 'J': 
      v1=ValueRFA1;        
      v2=ValueRFA2;            
      v3=ValueRFA3;       
      v4=ValueRFA4;        
      v5= ValueRFA5;    
      v6=ValueRFA6;       
      v7=ValueRFA7;       
      v8=ValueRFA8; 
       ProcessSendESP('J');  delay(500);     
       ValueRFA5 = ValueMT1;ValueRFA6=ValueMT2; ValueRFA7 = ValueMT3;ValueRFA8=ValueMT4;
      break;
      case 'K':    
       ValueRFB5 = ValueMT1;ValueRFB6=ValueMT2; ValueRFB7 = ValueMT3;ValueRFB8=ValueMT4;
      v1=ValueRFB1;        
      v2=ValueRFB2;            
      v3=ValueRFB3;       
      v4=ValueRFB4;        
      v5= ValueRFB5;    
      v6=ValueRFB6;       
      v7=ValueRFB7;       
      v8=ValueRFB8; 
       ProcessSendESP('K');  delay(500);  
       
     break;            
  
  
 }//switch
   break;

  }//((InputRS232[0] == 'p'))

// for (j=0;j<20;j++){  InputRS232[j]=' ';}


 
} //if (FillDataAndDisplay_CheckModeID(1))

 
  }// if (c == 'P')

   
 
  }//for (i=1;i<1000;i++)
    for (j=0;j<20;j++){  InputRS232[j]='0';}
}  



