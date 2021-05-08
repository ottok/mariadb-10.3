CREATE USER 'bob'@'localhost';
GRANT ALL ON *.* TO 'bob'@'localhost' with grant option;

CREATE USER 'bob'@'%';
GRANT ALL ON *.* TO 'bob'@'%' with grant option;

CREATE USER 'boby'@'%' identified by 'hey';
GRANT ALL ON *.* TO 'boby'@'%' identified by 'hey' with grant option;

CREATE USER 'boby'@'localhost' identified by 'hey';
GRANT ALL ON *.* TO 'boby'@'localhost' identified by 'hey' with grant option;

CREATE DATABASE test2;