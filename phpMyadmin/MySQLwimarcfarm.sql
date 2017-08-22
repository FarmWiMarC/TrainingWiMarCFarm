-- phpMyAdmin SQL Dump
-- version 4.6.6
-- https://www.phpmyadmin.net/
--
-- Host: localhost:3306
-- Generation Time: Aug 22, 2017 at 05:58 AM
-- Server version: 10.1.24-MariaDB
-- PHP Version: 7.0.8

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `id2613481_sensora`
--

-- --------------------------------------------------------

--
-- Table structure for table `a`
--

CREATE TABLE `a` (
  `date` varchar(25) COLLATE utf8_unicode_ci NOT NULL,
  `time` varchar(25) COLLATE utf8_unicode_ci NOT NULL,
  `A` varchar(10) COLLATE utf8_unicode_ci NOT NULL,
  `B` varchar(10) COLLATE utf8_unicode_ci NOT NULL,
  `C` varchar(10) COLLATE utf8_unicode_ci NOT NULL,
  `D` varchar(10) COLLATE utf8_unicode_ci NOT NULL,
  `E` varchar(10) COLLATE utf8_unicode_ci NOT NULL,
  `F` varchar(10) COLLATE utf8_unicode_ci NOT NULL,
  `G` varchar(10) COLLATE utf8_unicode_ci NOT NULL,
  `H` varchar(10) COLLATE utf8_unicode_ci NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_unicode_ci;

-- --------------------------------------------------------

--
-- Table structure for table `b`
--

CREATE TABLE `b` (
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

CREATE TABLE `c` (
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

CREATE TABLE `d` (
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

CREATE TABLE `device` (
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

-- --------------------------------------------------------

--
-- Table structure for table `e`
--

CREATE TABLE `e` (
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

CREATE TABLE `f` (
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

CREATE TABLE `g` (
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

CREATE TABLE `h` (
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

CREATE TABLE `humid` (
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

CREATE TABLE `i` (
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

CREATE TABLE `j` (
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

CREATE TABLE `level` (
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

CREATE TABLE `lux` (
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

CREATE TABLE `moisture` (
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

CREATE TABLE `rain` (
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
-- Table structure for table `sensor`
--

CREATE TABLE `sensor` (
  `date` varchar(25) NOT NULL,
  `time` varchar(15) NOT NULL,
  `Temp` varchar(5) NOT NULL,
  `Humid` varchar(5) NOT NULL,
  `Light` varchar(5) NOT NULL,
  `Pressure` varchar(5) NOT NULL,
  `M1` varchar(5) NOT NULL,
  `SoilTemp` varchar(5) NOT NULL,
  `M2` varchar(5) NOT NULL,
  `Supply` varchar(5) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Table structure for table `temp`
--

CREATE TABLE `temp` (
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

CREATE TABLE `volt` (
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

CREATE TABLE `wind` (
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
-- Indexes for dumped tables
--

--
-- Indexes for table `a`
--
ALTER TABLE `a`
  ADD KEY `date` (`date`);

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
