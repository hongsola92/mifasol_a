use madangdb;
create table NewBook(
	bookid 		integer,
    bookname 	varchar(20),
    publisher 	varchar(20),
    price 		integer);
drop table NewBook;
create table NewBook(
	bookid 		integer,
    bookname 	varchar(20),
    publisher 	varchar(20),
    price 		integer,
    primary key(bookid));
    
    drop table NewBook;
create table NewBook(
	bookid 		integer ,
    bookname 	varchar(20) not null,
    publisher 	varchar(20) unique,
    price 		integer default 10000 check(price >= 10000),
    primary key(bookname, publisher));
    
    create table NewCustomer(
		custid integer primary key,
        name 		varchar(40),
        address 	varchar(40),
        phon 		varchar(30)
        );
-- 3-36 example
CREATE TABLE NewOrders(
orderid INTEGER,
custid INTEGER NOT NULL,
bookid INTEGER NOT NULL,
saleprice INTEGER,
orderdate DATE,
PRIMARY KEY(orderid),
foreign key(custid) references NewCustomer(custid) on delete cascade );

-- 3-37 example
alter table NewBook add isbn varchar(13);

-- 3-38 example
alter table NewBook modify isbn integer;

-- 3-39 example
alter table NewBook drop column isbn;

-- 3-40 example
alter TABLE NewBook MODIFY bookname VARCHAR(20) NOT NULL;

-- 3-41 example
alter table NewBook ADD PRIMARY KEY(bookid);
