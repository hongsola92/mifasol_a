use madangdb;
-- 3-45 example
insert into	Book(bookid, bookname, publisher, publisher)
	value (13, "스포츠 의학", "한솔의학서적", 90000);
select * from Book;

-- 3-46 example
create table Imported_book(
	bookid integer primary key,
    bookname varchar(20),
    publisher varchar(20),
    price integer);
 
-- 3-47 example

set SQL_SAFE_UPDATES=0;
select * from Customer;
update Customer set address = "대한민국 부산" where custid =5;

-- 3-48 example
select * from Book;
update Book
SET publisher = (select publisher From imported_book where bookid = 10) where bookid = 14;

-- 3-49 example
delete from Book
where bookid > 10;
select * from Book;

select * from customer;
delete from Customer;