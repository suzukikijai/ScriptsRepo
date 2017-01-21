#Grants Revoke
REVOKE USAGE ON *.* FROM 'geogeorge'@'%' ;
REVOKE SELECT, LOCK TABLES ON *.* FROM 'geogeorge'@'%';
REVOKE SELECT, LOCK TABLES, SHOW VIEW, EVENT, TRIGGER ON *.* FROM 'geogeorge'@'%';

#For MYSQL dump
GRANT USAGE ON *.* TO 'geogeorge'@'%.hirrr.local' ;
GRANT SELECT, LOCK TABLES ON *.* TO 'geogeorge'@'%.hirrr.local';
GRANT SELECT, LOCK TABLES, SHOW VIEW, EVENT, TRIGGER ON *.* TO 'geogeorge'@'%.hirrr.local';

GRANT USAGE ON *.* TO 'geogeorge'@'192.168.1.%' ;
GRANT SELECT, LOCK TABLES ON *.* TO 'geogeorge'@'192.168.1.%';
GRANT SELECT, LOCK TABLES, SHOW VIEW, EVENT, TRIGGER ON *.* TO 'geogeorge'@'192.168.1.%';


GRANT USAGE ON *.* TO 'geogeorge'@'localhost' ;
GRANT SELECT, LOCK TABLES ON *.* TO 'geogeorge'@'localhost';
GRANT SELECT, LOCK TABLES, SHOW VIEW, EVENT, TRIGGER ON *.* TO 'geogeorge'@'localhost';



#UserCreation
CREATE USER 'presoolkk'@'192.168.1.%' IDENTIFIED BY 'password';
CREATE USER 'akhila'@'192.168.1.%' IDENTIFIED BY 'password';
CREATE USER 'geogeorge'@'192.168.1.%' IDENTIFIED BY 'password';
CREATE USER 'mithunManohar'@'192.168.1.%' IDENTIFIED BY 'password';
CREATE USER 'padmajith'@'192.168.1.%' IDENTIFIED BY 'password';
CREATE USER 'sithara'@'192.168.1.%' IDENTIFIED BY 'password';
CREATE USER 'ireneMary'@'192.168.1.%' IDENTIFIED BY 'password';
CREATE USER 'tempProgram'@'localhost' IDENTIFIED BY 'careersnow@123';


#TempProgramBot grants
GRANT UPDATE, SELECT, INSERT, DELETE ON *.* TO 'tempProgram'@'%.hirrr.local' identified by 'careersnow@123';

#PasswordMod
SET PASSWORD FOR 'root'@'localhost' = PASSWORD('umn123');
SET PASSWORD FOR 'root'@'192.168.1.%' = PASSWORD('umn123');
SET PASSWORD FOR 'root'@'%.hirrr.local' = PASSWORD('umn123');
SET PASSWORD FOR 'root'@'%' = PASSWORD('umn123');
SET PASSWORD FOR 'root'@'127.0.0.1' = PASSWORD('umn123');
CREATE USER 'root'@'192.168.1.%' IDENTIFIED BY 'umn123';
CREATE USER 'root'@'%.hirrr.local' IDENTIFIED BY 'umn123';

#UserDelete
DROP USER 'geogeorge'@'%';
DROP USER 'geogeorge'@'127.0.0.1';
DROP USER 'root'@'192.168.1.6';
DROP USER 'root'@'umnservermain';
DROP USER 'slave_user'@'192.168.1.32';
DROP USER 'dbuser'@'192.168.1.23';
DROP USER 'some_user'@'localhost';



#SpecificBots
GRANT SELECT ON *.* TO 'monitorBot'@'%' identified by 'zZF95SaU3DRDQSV6H4w3PnYUHhcHn';





#Akhil Privileges
GRANT DELETE ON ATS.* TO 'presoolkk'@'192.168.1.%' identified by 'password';
GRANT DELETE ON results_provider_db.* TO 'presoolkk'@'192.168.1.%' identified by 'password';
GRANT DELETE ON scrapperdb.* TO 'presoolkk'@'192.168.1.%' identified by 'password';
GRANT DELETE ON skills.* TO 'presoolkk'@'192.168.1.%' identified by 'password';
GRANT DELETE ON test_results_provider_db.* TO 'presoolkk'@'192.168.1.%' identified by 'password';
GRANT DELETE ON test_scrapperdb.* TO 'presoolkk'@'192.168.1.%' identified by 'password';
GRANT INSERT ON ATS.* TO 'presoolkk'@'192.168.1.%' identified by 'password';
GRANT INSERT ON results_provider_db.* TO 'presoolkk'@'192.168.1.%' identified by 'password';
GRANT INSERT ON scrapperdb.* TO 'presoolkk'@'192.168.1.%' identified by 'password';
GRANT INSERT ON test_results_provider_db.* TO 'presoolkk'@'192.168.1.%' identified by 'password';
GRANT INSERT ON test_scrapperdb.* TO 'presoolkk'@'192.168.1.%' identified by 'password';
GRANT SELECT ON ATS.* TO 'presoolkk'@'192.168.1.%' identified by 'password';
GRANT SELECT ON results_provider_db.* TO 'presoolkk'@'192.168.1.%' identified by 'password';
GRANT SELECT ON scrapperdb.* TO 'presoolkk'@'192.168.1.%' identified by 'password';
GRANT SELECT ON skills.* TO 'presoolkk'@'192.168.1.%' identified by 'password';
GRANT SELECT ON test_results_provider_db.* TO 'presoolkk'@'192.168.1.%' identified by 'password';
GRANT SELECT ON test_scrapperdb.* TO 'presoolkk'@'192.168.1.%' identified by 'password';
GRANT UPDATE ON ATS.* TO 'presoolkk'@'192.168.1.%' identified by 'password';
GRANT UPDATE ON results_provider_db.* TO 'presoolkk'@'192.168.1.%' identified by 'password';
GRANT UPDATE ON scrapperdb.* TO 'presoolkk'@'192.168.1.%' identified by 'password';
GRANT UPDATE ON skills.* TO 'presoolkk'@'192.168.1.%' identified by 'password';
GRANT UPDATE ON test_results_provider_db.* TO 'presoolkk'@'192.168.1.%' identified by 'password';
GRANT UPDATE ON test_scrapperdb.* TO 'presoolkk'@'192.168.1.%' identified by 'password';

#Akhila Privileges
GRANT UPDATE ON test_scrapperdb.* TO 'akhila'@'192.168.1.%' identified by 'password';
GRANT SELECT ON test_scrapperdb.* TO 'akhila'@'192.168.1.%' identified by 'password';
GRANT INSERT ON test_scrapperdb.* TO 'akhila'@'192.168.1.%' identified by 'password';
GRANT DELETE ON test_scrapperdb.* TO 'akhila'@'192.168.1.%' identified by 'password';
GRANT UPDATE ON test_results_provider_db.* TO 'akhila'@'192.168.1.%' identified by 'password';
GRANT SELECT ON test_results_provider_db.* TO 'akhila'@'192.168.1.%' identified by 'password';
GRANT INSERT ON test_results_provider_db.* TO 'akhila'@'192.168.1.%' identified by 'password';
GRANT DELETE ON test_results_provider_db.* TO 'akhila'@'192.168.1.%' identified by 'password';
GRANT SELECT ON skills.* TO 'akhila'@'192.168.1.%' identified by 'password';
GRANT SELECT ON ATS.* TO 'akhila'@'192.168.1.%' identified by 'password';
GRANT SELECT ON results_provider_db.* TO 'akhila'@'192.168.1.%' identified by 'password';
GRANT SELECT ON scrapperdb.* TO 'akhila'@'192.168.1.%' identified by 'password';


#Geo Privileges
GRANT UPDATE ON ATS.* TO 'geogeorge'@'192.168.1.%' identified by 'password';
GRANT SELECT ON ATS.* TO 'geogeorge'@'192.168.1.%' identified by 'password';
GRANT INSERT ON ATS.* TO 'geogeorge'@'192.168.1.%' identified by 'password';
GRANT DELETE ON ATS.* TO 'geogeorge'@'192.168.1.%' identified by 'password';
GRANT UPDATE ON results_provider_db.* TO 'geogeorge'@'192.168.1.%' identified by 'password';
GRANT SELECT ON results_provider_db.* TO 'geogeorge'@'192.168.1.%' identified by 'password';
GRANT INSERT ON results_provider_db.* TO 'geogeorge'@'192.168.1.%' identified by 'password';
GRANT DELETE ON results_provider_db.* TO 'geogeorge'@'192.168.1.%' identified by 'password';
GRANT UPDATE ON scrapperdb.* TO 'geogeorge'@'192.168.1.%' identified by 'password';
GRANT SELECT ON scrapperdb.* TO 'geogeorge'@'192.168.1.%' identified by 'password';
GRANT INSERT ON scrapperdb.* TO 'geogeorge'@'192.168.1.%' identified by 'password';
GRANT DELETE ON scrapperdb.* TO 'geogeorge'@'192.168.1.%' identified by 'password';
GRANT UPDATE ON skills.* TO 'geogeorge'@'192.168.1.%' identified by 'password';
GRANT SELECT ON skills.* TO 'geogeorge'@'192.168.1.%' identified by 'password';
GRANT INSERT ON skills.* TO 'geogeorge'@'192.168.1.%' identified by 'password';
GRANT DELETE ON skills.* TO 'geogeorge'@'192.168.1.%' identified by 'password';
GRANT UPDATE ON test_results_provider_db.* TO 'geogeorge'@'192.168.1.%' identified by 'password';
GRANT SELECT ON test_results_provider_db.* TO 'geogeorge'@'192.168.1.%' identified by 'password';
GRANT INSERT ON test_results_provider_db.* TO 'geogeorge'@'192.168.1.%' identified by 'password';
GRANT DELETE ON test_results_provider_db.* TO 'geogeorge'@'192.168.1.%' identified by 'password';
GRANT UPDATE ON test_scrapperdb.* TO 'geogeorge'@'192.168.1.%' identified by 'password';
GRANT SELECT ON test_scrapperdb.* TO 'geogeorge'@'192.168.1.%' identified by 'password';
GRANT INSERT ON test_scrapperdb.* TO 'geogeorge'@'192.168.1.%' identified by 'password';
GRANT DELETE ON test_scrapperdb.* TO 'geogeorge'@'192.168.1.%' identified by 'password';

#MithunManohar
GRANT UPDATE ON ATS.* TO 'mithunManohar'@'192.168.1.%' identified by 'password';
GRANT SELECT ON ATS.* TO 'mithunManohar'@'192.168.1.%' identified by 'password';
GRANT INSERT ON ATS.* TO 'mithunManohar'@'192.168.1.%' identified by 'password';
GRANT DELETE ON ATS.* TO 'mithunManohar'@'192.168.1.%' identified by 'password';
GRANT UPDATE ON results_provider_db.* TO 'mithunManohar'@'192.168.1.%' identified by 'password';
GRANT SELECT ON results_provider_db.* TO 'mithunManohar'@'192.168.1.%' identified by 'password';
GRANT INSERT ON results_provider_db.* TO 'mithunManohar'@'192.168.1.%' identified by 'password';
GRANT DELETE ON results_provider_db.* TO 'mithunManohar'@'192.168.1.%' identified by 'password';
GRANT UPDATE ON scrapperdb.* TO 'mithunManohar'@'192.168.1.%' identified by 'password';
GRANT SELECT ON scrapperdb.* TO 'mithunManohar'@'192.168.1.%' identified by 'password';
GRANT INSERT ON scrapperdb.* TO 'mithunManohar'@'192.168.1.%' identified by 'password';
GRANT DELETE ON scrapperdb.* TO 'mithunManohar'@'192.168.1.%' identified by 'password';
GRANT UPDATE ON skills.* TO 'mithunManohar'@'192.168.1.%' identified by 'password';
GRANT SELECT ON skills.* TO 'mithunManohar'@'192.168.1.%' identified by 'password';
GRANT INSERT ON skills.* TO 'mithunManohar'@'192.168.1.%' identified by 'password';
GRANT DELETE ON skills.* TO 'mithunManohar'@'192.168.1.%' identified by 'password';
GRANT UPDATE ON test_results_provider_db.* TO 'mithunManohar'@'192.168.1.%' identified by 'password';
GRANT SELECT ON test_results_provider_db.* TO 'mithunManohar'@'192.168.1.%' identified by 'password';
GRANT INSERT ON test_results_provider_db.* TO 'mithunManohar'@'192.168.1.%' identified by 'password';
GRANT DELETE ON test_results_provider_db.* TO 'mithunManohar'@'192.168.1.%' identified by 'password';
GRANT UPDATE ON test_scrapperdb.* TO 'mithunManohar'@'192.168.1.%' identified by 'password';
GRANT SELECT ON test_scrapperdb.* TO 'mithunManohar'@'192.168.1.%' identified by 'password';
GRANT INSERT ON test_scrapperdb.* TO 'mithunManohar'@'192.168.1.%' identified by 'password';
GRANT DELETE ON test_scrapperdb.* TO 'mithunManohar'@'192.168.1.%' identified by 'password';

#Padmajith
GRANT SELECT ON ATS.* TO 'padmajith'@'192.168.1.%' identified by 'password';
GRANT SELECT ON results_provider_db.* TO 'padmajith'@'192.168.1.%' identified by 'password';
GRANT SELECT ON scrapperdb.* TO 'padmajith'@'192.168.1.%' identified by 'password';
GRANT SELECT ON skills.* TO 'padmajith'@'192.168.1.%' identified by 'password';
GRANT SELECT ON test_results_provider_db.* TO 'padmajith'@'192.168.1.%' identified by 'password';
GRANT SELECT ON test_scrapperdb.* TO 'padmajith'@'192.168.1.%' identified by 'password';

#Sithara
GRANT SELECT ON test_results_provider_db.* TO 'sithara'@'192.168.1.%' identified by 'password';
GRANT SELECT ON test_scrapperdb.* TO 'sithara'@'192.168.1.%' identified by 'password';

#junaidhMK
GRANT UPDATE ON ATS.* TO 'junaidhMK'@'192.168.1.%' identified by 'password';
GRANT SELECT ON ATS.* TO 'junaidhMK'@'192.168.1.%' identified by 'password';
GRANT INSERT ON ATS.* TO 'junaidhMK'@'192.168.1.%' identified by 'password';
GRANT DELETE ON ATS.* TO 'junaidhMK'@'192.168.1.%' identified by 'password';
GRANT UPDATE ON results_provider_db.* TO 'junaidhMK'@'192.168.1.%' identified by 'password';
GRANT SELECT ON results_provider_db.* TO 'junaidhMK'@'192.168.1.%' identified by 'password';
GRANT INSERT ON results_provider_db.* TO 'junaidhMK'@'192.168.1.%' identified by 'password';
GRANT DELETE ON results_provider_db.* TO 'junaidhMK'@'192.168.1.%' identified by 'password';
GRANT UPDATE ON scrapperdb.* TO 'junaidhMK'@'192.168.1.%' identified by 'password';
GRANT SELECT ON scrapperdb.* TO 'junaidhMK'@'192.168.1.%' identified by 'password';
GRANT INSERT ON scrapperdb.* TO 'junaidhMK'@'192.168.1.%' identified by 'password';
GRANT DELETE ON scrapperdb.* TO 'junaidhMK'@'192.168.1.%' identified by 'password';
GRANT UPDATE ON skills.* TO 'junaidhMK'@'192.168.1.%' identified by 'password';
GRANT SELECT ON skills.* TO 'junaidhMK'@'192.168.1.%' identified by 'password';
GRANT INSERT ON skills.* TO 'junaidhMK'@'192.168.1.%' identified by 'password';
GRANT DELETE ON skills.* TO 'junaidhMK'@'192.168.1.%' identified by 'password';
GRANT UPDATE ON test_results_provider_db.* TO 'junaidhMK'@'192.168.1.%' identified by 'password';
GRANT SELECT ON test_results_provider_db.* TO 'junaidhMK'@'192.168.1.%' identified by 'password';
GRANT INSERT ON test_results_provider_db.* TO 'junaidhMK'@'192.168.1.%' identified by 'password';
GRANT DELETE ON test_results_provider_db.* TO 'junaidhMK'@'192.168.1.%' identified by 'password';
GRANT UPDATE ON test_scrapperdb.* TO 'junaidhMK'@'192.168.1.%' identified by 'password';
GRANT SELECT ON test_scrapperdb.* TO 'junaidhMK'@'192.168.1.%' identified by 'password';
GRANT INSERT ON test_scrapperdb.* TO 'junaidhMK'@'192.168.1.%' identified by 'password';
GRANT DELETE ON test_scrapperdb.* TO 'junaidhMK'@'192.168.1.%' identified by 'password';
