create database assignment2;
 
 use assignment2;
 
 create table information(
 First_name varchar(30)not null,
 Last_name varchar(30)not null,
 Address varchar(30)not null,
 City varchar (30)not null,
 Age int  not null
 );
 
 
 insert into information(First_name,Last_name,Address,City,Age)
 values
 ('Mickey','Mouse','123Fantasy Way','Anaheim',73),
 ('Bat','Man','321Cavem Ave','Gotham',54),
 ('Wonder','Woman','987Truth Way','Paradise',39),
 ('Donald','Duck','555Quack Street','Mallard',65),
 ('Bugs','Bunny','567Carrot Street','Rascal',58),
 ('Wiley','Coyote','999Acme Way','Canyon',61),
 ('Cat','Woman','234Purrfect Street','Hairball',32),
 ('Tweety','Bird','543','Itotltaw',28);
