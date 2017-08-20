-- phpMyAdmin SQL Dump
-- version 2.11.11.3
-- http://www.phpmyadmin.net
--
-- Host: localhost
-- Generation Time: Aug 19, 2017 at 08:17 AM
-- Server version: 5.1.73
-- PHP Version: 5.3.3

SET SQL_MODE="NO_AUTO_VALUE_ON_ZERO";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

--
-- Database: `wimarcfarm`
--

-- --------------------------------------------------------

--
-- Table structure for table `a`
--

CREATE TABLE IF NOT EXISTS `a` (
  `date` varchar(25) NOT NULL,
  `time` varchar(15) NOT NULL,
  `A` varchar(5) NOT NULL,
  `B` varchar(5) NOT NULL,
  `C` varchar(5) NOT NULL,
  `D` varchar(5) NOT NULL,
  `E` varchar(5) NOT NULL,
  `F` varchar(5) NOT NULL,
  `G` varchar(5) NOT NULL,
  `H` varchar(5) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `a`
--


-- --------------------------------------------------------

--
-- Table structure for table `b`
--

CREATE TABLE IF NOT EXISTS `b` (
  `date` varchar(25) NOT NULL,
  `time` varchar(15) NOT NULL,
  `A` varchar(5) NOT NULL,
  `B` varchar(5) NOT NULL,
  `C` varchar(5) NOT NULL,
  `D` varchar(5) NOT NULL,
  `E` varchar(5) NOT NULL,
  `F` varchar(5) NOT NULL,
  `G` varchar(5) NOT NULL,
  `H` varchar(5) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `b`
--


-- --------------------------------------------------------

--
-- Table structure for table `c`
--

CREATE TABLE IF NOT EXISTS `c` (
  `date` varchar(25) NOT NULL,
  `time` varchar(15) NOT NULL,
  `A` varchar(5) NOT NULL,
  `B` varchar(5) NOT NULL,
  `C` varchar(5) NOT NULL,
  `D` varchar(5) NOT NULL,
  `E` varchar(5) NOT NULL,
  `F` varchar(5) NOT NULL,
  `G` varchar(5) NOT NULL,
  `H` varchar(5) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `c`
--


-- --------------------------------------------------------

--
-- Table structure for table `d`
--

CREATE TABLE IF NOT EXISTS `d` (
  `date` varchar(25) NOT NULL,
  `time` varchar(15) NOT NULL,
  `A` varchar(5) NOT NULL,
  `B` varchar(5) NOT NULL,
  `C` varchar(5) NOT NULL,
  `D` varchar(5) NOT NULL,
  `E` varchar(5) NOT NULL,
  `F` varchar(5) NOT NULL,
  `G` varchar(5) NOT NULL,
  `H` varchar(5) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `d`
--


-- --------------------------------------------------------

--
-- Table structure for table `device`
--

CREATE TABLE IF NOT EXISTS `device` (
  `date` varchar(25) NOT NULL,
  `time` varchar(15) NOT NULL,
  `A` varchar(5) NOT NULL,
  `B` varchar(5) NOT NULL,
  `C` varchar(5) NOT NULL,
  `D` varchar(5) NOT NULL,
  `E` varchar(5) NOT NULL,
  `F` varchar(5) NOT NULL,
  `G` varchar(5) NOT NULL,
  `H` varchar(5) NOT NULL,
  `status` varchar(15) NOT NULL,
  `device` varchar(25) NOT NULL,
  `RESET` varchar(5) NOT NULL,
  `updatecode` varchar(5) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `device`
--


-- --------------------------------------------------------

--
-- Table structure for table `e`
--

CREATE TABLE IF NOT EXISTS `e` (
  `date` varchar(25) NOT NULL,
  `time` varchar(15) NOT NULL,
  `A` varchar(5) NOT NULL,
  `B` varchar(5) NOT NULL,
  `C` varchar(5) NOT NULL,
  `D` varchar(5) NOT NULL,
  `E` varchar(5) NOT NULL,
  `F` varchar(5) NOT NULL,
  `G` varchar(5) NOT NULL,
  `H` varchar(5) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `e`
--


-- --------------------------------------------------------

--
-- Table structure for table `f`
--

CREATE TABLE IF NOT EXISTS `f` (
  `date` varchar(25) NOT NULL,
  `time` varchar(15) NOT NULL,
  `A` varchar(5) NOT NULL,
  `B` varchar(5) NOT NULL,
  `C` varchar(5) NOT NULL,
  `D` varchar(5) NOT NULL,
  `E` varchar(5) NOT NULL,
  `F` varchar(5) NOT NULL,
  `G` varchar(5) NOT NULL,
  `H` varchar(5) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `f`
--


-- --------------------------------------------------------

--
-- Table structure for table `g`
--

CREATE TABLE IF NOT EXISTS `g` (
  `date` varchar(25) NOT NULL,
  `time` varchar(15) NOT NULL,
  `A` varchar(5) NOT NULL,
  `B` varchar(5) NOT NULL,
  `C` varchar(5) NOT NULL,
  `D` varchar(5) NOT NULL,
  `E` varchar(5) NOT NULL,
  `F` varchar(5) NOT NULL,
  `G` varchar(5) NOT NULL,
  `H` varchar(5) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `g`
--


-- --------------------------------------------------------

--
-- Table structure for table `h`
--

CREATE TABLE IF NOT EXISTS `h` (
  `date` varchar(25) NOT NULL,
  `time` varchar(15) NOT NULL,
  `A` varchar(5) NOT NULL,
  `B` varchar(5) NOT NULL,
  `C` varchar(5) NOT NULL,
  `D` varchar(5) NOT NULL,
  `E` varchar(5) NOT NULL,
  `F` varchar(5) NOT NULL,
  `G` varchar(5) NOT NULL,
  `H` varchar(5) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `h`
--


-- --------------------------------------------------------

--
-- Table structure for table `humid`
--

CREATE TABLE IF NOT EXISTS `humid` (
  `date` varchar(25) NOT NULL,
  `time` varchar(15) NOT NULL,
  `A` varchar(5) NOT NULL,
  `B` varchar(5) NOT NULL,
  `C` varchar(5) NOT NULL,
  `D` varchar(5) NOT NULL,
  `E` varchar(5) NOT NULL,
  `F` varchar(5) NOT NULL,
  `G` varchar(5) NOT NULL,
  `H` varchar(5) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `humid`
--


-- --------------------------------------------------------

--
-- Table structure for table `i`
--

CREATE TABLE IF NOT EXISTS `i` (
  `date` varchar(25) NOT NULL,
  `time` varchar(15) NOT NULL,
  `A` varchar(5) NOT NULL,
  `B` varchar(5) NOT NULL,
  `C` varchar(5) NOT NULL,
  `D` varchar(5) NOT NULL,
  `E` varchar(5) NOT NULL,
  `F` varchar(5) NOT NULL,
  `G` varchar(5) NOT NULL,
  `H` varchar(5) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `i`
--


-- --------------------------------------------------------

--
-- Table structure for table `j`
--

CREATE TABLE IF NOT EXISTS `j` (
  `date` varchar(25) NOT NULL,
  `time` varchar(15) NOT NULL,
  `A` varchar(5) NOT NULL,
  `B` varchar(5) NOT NULL,
  `C` varchar(5) NOT NULL,
  `D` varchar(5) NOT NULL,
  `E` varchar(5) NOT NULL,
  `F` varchar(5) NOT NULL,
  `G` varchar(5) NOT NULL,
  `H` varchar(5) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `j`
--


-- --------------------------------------------------------

--
-- Table structure for table `level`
--

CREATE TABLE IF NOT EXISTS `level` (
  `date` varchar(25) NOT NULL,
  `time` varchar(15) NOT NULL,
  `A` varchar(5) NOT NULL,
  `B` varchar(5) NOT NULL,
  `C` varchar(5) NOT NULL,
  `D` varchar(5) NOT NULL,
  `E` varchar(5) NOT NULL,
  `F` varchar(5) NOT NULL,
  `G` varchar(5) NOT NULL,
  `H` varchar(5) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `level`
--


-- --------------------------------------------------------

--
-- Table structure for table `lux`
--

CREATE TABLE IF NOT EXISTS `lux` (
  `date` varchar(25) NOT NULL,
  `time` varchar(15) NOT NULL,
  `A` varchar(5) NOT NULL,
  `B` varchar(5) NOT NULL,
  `C` varchar(5) NOT NULL,
  `D` varchar(5) NOT NULL,
  `E` varchar(5) NOT NULL,
  `F` varchar(5) NOT NULL,
  `G` varchar(5) NOT NULL,
  `H` varchar(5) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `lux`
--


-- --------------------------------------------------------

--
-- Table structure for table `moisture`
--

CREATE TABLE IF NOT EXISTS `moisture` (
  `date` varchar(25) NOT NULL,
  `time` varchar(15) NOT NULL,
  `A` varchar(5) NOT NULL,
  `B` varchar(5) NOT NULL,
  `C` varchar(5) NOT NULL,
  `D` varchar(5) NOT NULL,
  `E` varchar(5) NOT NULL,
  `F` varchar(5) NOT NULL,
  `G` varchar(5) NOT NULL,
  `H` varchar(5) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `moisture`
--


-- --------------------------------------------------------

--
-- Table structure for table `rain`
--

CREATE TABLE IF NOT EXISTS `rain` (
  `date` varchar(25) NOT NULL,
  `time` varchar(15) NOT NULL,
  `A` varchar(5) NOT NULL,
  `B` varchar(5) NOT NULL,
  `C` varchar(5) NOT NULL,
  `D` varchar(5) NOT NULL,
  `E` varchar(5) NOT NULL,
  `F` varchar(5) NOT NULL,
  `G` varchar(5) NOT NULL,
  `H` varchar(5) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `rain`
--


-- --------------------------------------------------------

--
-- Table structure for table `sensor`
--

CREATE TABLE IF NOT EXISTS `sensor` (
  `date` varchar(25) NOT NULL,
  `time` varchar(15) NOT NULL,
  `Temp` varchar(5) NOT NULL,
  `Humid` varchar(5) NOT NULL,
  `Rain` varchar(5) NOT NULL,
  `WindD` varchar(5) NOT NULL,
  `WindS` varchar(5) NOT NULL,
  `M1` varchar(5) NOT NULL,
  `M2` varchar(5) NOT NULL,
  `Lux` varchar(5) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `sensor`
--


-- --------------------------------------------------------

--
-- Table structure for table `temp`
--

CREATE TABLE IF NOT EXISTS `temp` (
  `date` varchar(25) NOT NULL,
  `time` varchar(15) NOT NULL,
  `A` varchar(5) NOT NULL,
  `B` varchar(5) NOT NULL,
  `C` varchar(5) NOT NULL,
  `D` varchar(5) NOT NULL,
  `E` varchar(5) NOT NULL,
  `F` varchar(5) NOT NULL,
  `G` varchar(5) NOT NULL,
  `H` varchar(5) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `temp`
--


-- --------------------------------------------------------

--
-- Table structure for table `volt`
--

CREATE TABLE IF NOT EXISTS `volt` (
  `date` varchar(25) NOT NULL,
  `time` varchar(15) NOT NULL,
  `A` varchar(5) NOT NULL,
  `B` varchar(5) NOT NULL,
  `C` varchar(5) NOT NULL,
  `D` varchar(5) NOT NULL,
  `E` varchar(5) NOT NULL,
  `F` varchar(5) NOT NULL,
  `G` varchar(5) NOT NULL,
  `H` varchar(5) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `volt`
--


-- --------------------------------------------------------

--
-- Table structure for table `wind`
--

CREATE TABLE IF NOT EXISTS `wind` (
  `date` varchar(25) NOT NULL,
  `time` varchar(15) NOT NULL,
  `A` varchar(5) NOT NULL,
  `B` varchar(5) NOT NULL,
  `C` varchar(5) NOT NULL,
  `D` varchar(5) NOT NULL,
  `E` varchar(5) NOT NULL,
  `F` varchar(5) NOT NULL,
  `G` varchar(5) NOT NULL,
  `H` varchar(5) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `wind`
--

