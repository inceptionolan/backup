-- MySQL dump 10.13  Distrib 8.0.17, for Linux (x86_64)
--
-- Host: localhost    Database: my_project
-- ------------------------------------------------------
-- Server version	8.0.17

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8mb4 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Current Database: `my_project`
--

CREATE DATABASE /*!32312 IF NOT EXISTS*/ `my_project` /*!40100 DEFAULT CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci */ /*!80016 DEFAULT ENCRYPTION='N' */;

USE `my_project`;

--
-- Table structure for table `ADDRESS`
--

DROP TABLE IF EXISTS `ADDRESS`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `ADDRESS` (
  `ADDRESS_ID` int(11) NOT NULL AUTO_INCREMENT,
  `AREA` varchar(45) DEFAULT NULL,
  `CITY` varchar(45) NOT NULL,
  `PINCODE` int(6) NOT NULL,
  PRIMARY KEY (`ADDRESS_ID`)
) ENGINE=InnoDB AUTO_INCREMENT=4 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `ADDRESS`
--

LOCK TABLES `ADDRESS` WRITE;
/*!40000 ALTER TABLE `ADDRESS` DISABLE KEYS */;
INSERT INTO `ADDRESS` VALUES (1,'swargate','Pune',431254),(2,'wagholi','pune',124578),(3,'shiwaji nagaer','Nashik',568978);
/*!40000 ALTER TABLE `ADDRESS` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `ADMIN_TABLE`
--

DROP TABLE IF EXISTS `ADMIN_TABLE`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `ADMIN_TABLE` (
  `ADMIN_ID` int(11) NOT NULL,
  `FNAME` varchar(45) DEFAULT NULL,
  `LNAME` varchar(45) NOT NULL,
  `GENDER` varchar(10) NOT NULL,
  `MOBILE` int(10) NOT NULL,
  `DOB` date NOT NULL,
  `JOIN_DATE` date NOT NULL,
  `FEEDBACK_ID` int(11) NOT NULL,
  `USER_ID` int(11) NOT NULL,
  `ADDRESS_ID` int(11) NOT NULL,
  `COURSE_ID` int(11) NOT NULL,
  PRIMARY KEY (`ADMIN_ID`),
  UNIQUE KEY `MOBILE_UNIQUE` (`MOBILE`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `ADMIN_TABLE`
--

LOCK TABLES `ADMIN_TABLE` WRITE;
/*!40000 ALTER TABLE `ADMIN_TABLE` DISABLE KEYS */;
INSERT INTO `ADMIN_TABLE` VALUES (1,'Bhagwan','Nameless','Male',10000000,'1000-01-01','1000-01-01',1,1,1,1);
/*!40000 ALTER TABLE `ADMIN_TABLE` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `COURSE_TABLE`
--

DROP TABLE IF EXISTS `COURSE_TABLE`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `COURSE_TABLE` (
  `COURSE_ID` int(11) NOT NULL,
  `COURSE_NAME` varchar(45) NOT NULL,
  `START_DATE` date NOT NULL,
  `FEES` float NOT NULL,
  PRIMARY KEY (`COURSE_ID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `COURSE_TABLE`
--

LOCK TABLES `COURSE_TABLE` WRITE;
/*!40000 ALTER TABLE `COURSE_TABLE` DISABLE KEYS */;
INSERT INTO `COURSE_TABLE` VALUES (1,'Java','2019-01-01',6000),(2,'CPP','2019-01-01',1000);
/*!40000 ALTER TABLE `COURSE_TABLE` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `FEEDBACK_TABLE`
--

DROP TABLE IF EXISTS `FEEDBACK_TABLE`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `FEEDBACK_TABLE` (
  `FEEDBACK_ID` int(11) NOT NULL,
  `COURSE_ID` int(11) NOT NULL,
  `FEEDBACK` varchar(45) NOT NULL,
  `STUDENT_ID` varchar(45) NOT NULL,
  PRIMARY KEY (`FEEDBACK_ID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `FEEDBACK_TABLE`
--

LOCK TABLES `FEEDBACK_TABLE` WRITE;
/*!40000 ALTER TABLE `FEEDBACK_TABLE` DISABLE KEYS */;
INSERT INTO `FEEDBACK_TABLE` VALUES (1,1,'Very good lectures','101'),(2,1,'Best ever','102');
/*!40000 ALTER TABLE `FEEDBACK_TABLE` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `STAFF_COURSE_TABLE`
--

DROP TABLE IF EXISTS `STAFF_COURSE_TABLE`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `STAFF_COURSE_TABLE` (
  `COURSE_ID` int(11) NOT NULL,
  `EXPERT_ID` int(11) NOT NULL,
  PRIMARY KEY (`COURSE_ID`,`EXPERT_ID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `STAFF_COURSE_TABLE`
--

LOCK TABLES `STAFF_COURSE_TABLE` WRITE;
/*!40000 ALTER TABLE `STAFF_COURSE_TABLE` DISABLE KEYS */;
INSERT INTO `STAFF_COURSE_TABLE` VALUES (1,1),(1,2),(2,1);
/*!40000 ALTER TABLE `STAFF_COURSE_TABLE` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `STAFF_TABLE`
--

DROP TABLE IF EXISTS `STAFF_TABLE`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `STAFF_TABLE` (
  `EXPERT_ID` int(11) NOT NULL AUTO_INCREMENT,
  `FNAME` varchar(45) NOT NULL,
  `LNAME` varchar(45) NOT NULL,
  `GENDER` varchar(10) NOT NULL,
  `MOBILE` int(10) NOT NULL,
  `PHOTO` blob,
  `DOB` date NOT NULL,
  `JOIN_DATE` date NOT NULL,
  `UPLOAD` blob,
  `USER_ID` varchar(45) NOT NULL,
  `ADDRESS_ID` varchar(45) NOT NULL,
  PRIMARY KEY (`EXPERT_ID`),
  UNIQUE KEY `MOBILE_UNIQUE` (`MOBILE`)
) ENGINE=InnoDB AUTO_INCREMENT=3 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `STAFF_TABLE`
--

LOCK TABLES `STAFF_TABLE` WRITE;
/*!40000 ALTER TABLE `STAFF_TABLE` DISABLE KEYS */;
INSERT INTO `STAFF_TABLE` VALUES (1,'Girish ','Barhate','Male',659832578,NULL,'1994-02-02','2019-08-02',NULL,'1','1'),(2,'kale','Sir','Male',56894512,NULL,'1990-01-01','2016-01-02',NULL,'1','1');
/*!40000 ALTER TABLE `STAFF_TABLE` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `STUDENT_COURSE_TABLE`
--

DROP TABLE IF EXISTS `STUDENT_COURSE_TABLE`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `STUDENT_COURSE_TABLE` (
  `STUDENT_ID` int(11) NOT NULL,
  `COURSE_ID` int(11) NOT NULL,
  `COURSE_JOIN_DATE` date NOT NULL,
  `MARKS` int(11) DEFAULT NULL,
  PRIMARY KEY (`COURSE_ID`,`STUDENT_ID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `STUDENT_COURSE_TABLE`
--

LOCK TABLES `STUDENT_COURSE_TABLE` WRITE;
/*!40000 ALTER TABLE `STUDENT_COURSE_TABLE` DISABLE KEYS */;
INSERT INTO `STUDENT_COURSE_TABLE` VALUES (1,2,'2161-01-12',11),(2,2,'2012-01-12',NULL);
/*!40000 ALTER TABLE `STUDENT_COURSE_TABLE` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `STUDENT_TABLE`
--

DROP TABLE IF EXISTS `STUDENT_TABLE`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `STUDENT_TABLE` (
  `STUDENT_ID` int(11) NOT NULL AUTO_INCREMENT,
  `FIRST_NAME` varchar(45) NOT NULL,
  `LAST_NAME` varchar(45) NOT NULL,
  `GENDER` varchar(10) DEFAULT NULL,
  `MOBILE` decimal(10,0) NOT NULL,
  `PHOTO` blob,
  `DOB` date DEFAULT NULL,
  `JOIN_DATE` date DEFAULT NULL,
  `DOWNLOAD` varchar(45) DEFAULT NULL,
  `ADDRESS_ID` int(11) DEFAULT NULL,
  `USER_ID` int(11) DEFAULT NULL,
  PRIMARY KEY (`STUDENT_ID`)
) ENGINE=InnoDB AUTO_INCREMENT=105 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `STUDENT_TABLE`
--

LOCK TABLES `STUDENT_TABLE` WRITE;
/*!40000 ALTER TABLE `STUDENT_TABLE` DISABLE KEYS */;
INSERT INTO `STUDENT_TABLE` VALUES (101,'Karan','Narkhede','Male',9893976328,NULL,'2016-10-01','2019-08-19','',1,1),(102,'Suyash','Sayankar','Unknown',3265981245,NULL,'2016-01-01','2016-01-01',NULL,1,1),(103,'ganesh','kathar','Male',1245786598,NULL,'2019-01-12','2019-02-15',NULL,2,1),(104,'Maniratan','Kale','Male',11111512,NULL,NULL,NULL,NULL,NULL,NULL);
/*!40000 ALTER TABLE `STUDENT_TABLE` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `USER_TABLE`
--

DROP TABLE IF EXISTS `USER_TABLE`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `USER_TABLE` (
  `USER_ID` int(11) NOT NULL AUTO_INCREMENT,
  `ROLE_TYPE` varchar(45) NOT NULL,
  `EMIL_ID` varchar(60) NOT NULL,
  `PASSWORD` varchar(45) NOT NULL,
  PRIMARY KEY (`USER_ID`)
) ENGINE=InnoDB AUTO_INCREMENT=3 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `USER_TABLE`
--

LOCK TABLES `USER_TABLE` WRITE;
/*!40000 ALTER TABLE `USER_TABLE` DISABLE KEYS */;
INSERT INTO `USER_TABLE` VALUES (1,'Admin','god@heven.com','nonoeed'),(2,'Karan','karan@gmail.com','next_god');
/*!40000 ALTER TABLE `USER_TABLE` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2019-10-09 19:54:50
