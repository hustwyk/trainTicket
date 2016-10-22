create table admin
    (
    account varchar(50) primary key,
    pwd varchar(50) not null
    );
	
create table passenger
    (
    account varchar(50) primary key,
    pwd varchar(50) not null,
    name varchar(50),
    gender varchar(50),
    idnum varchar(50),
    callnum varchar(50),
    email varchar(50)
    );
	
create table traininfo
    (
    trainnum varchar(50) primary key,
    type varchar(50),
    startstation varchar(50),
    starttime varchar(50),
    endstation varchar(50),
    endtime varchar(50),
    seattotalnum int,
    hardtotalnum int,
    softtotalnum int,
    noseattotalnum int
    );
	
create table stationinfo
    (
    trainnum varchar(50),
    passstation varchar(50),
    stationcode varchar(50),
    laststation varchar(50),
    arrivaltime varchar(50),
    leavetime varchar(50),
	seatmargin int,
	hardmargin int,
	softmargin int,
	noseatmargin int,
    seatprice int,
    hardprice int,
    softprice int,
	primary key(trainnum,passstation,laststation)
    );
	
create table ticket
    (
    account varchar(50),
    name varchar(50),
    ordernum varchar(50),
    trainnum varchar(50),
    leavedate varchar(50),
    leavestation varchar(50),
    arrivalstation varchar(50),
    type varchar(50),
    price int,
    orderdate varchar(50),
    internet varchar(50),
    primary key(account, name, ordernum),
    foreign key(trainnum) references traininfo(trainnum)
    );