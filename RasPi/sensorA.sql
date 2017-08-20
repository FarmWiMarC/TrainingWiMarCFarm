-- phpMyAdmin SQL Dump
-- version 4.2.12deb2+deb8u2
-- http://www.phpmyadmin.net
--
-- Host: localhost
-- Generation Time: Aug 20, 2017 at 07:49 PM
-- Server version: 5.5.50-0+deb8u1
-- PHP Version: 5.6.24-0+deb8u1

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

--
-- Database: `sensorA`
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
  `status` varchar(5) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

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

-- --------------------------------------------------------

--
-- Table structure for table `status`
--

CREATE TABLE IF NOT EXISTS `status` (
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

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
