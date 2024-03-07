use madangdb;

SELECT custid 김연아, saleprice 판매액
FROM Orders
WHERE Orders.custid=2;

select count(*) from Orders;
-- 3-21 example
SELECT * FROM Customer, orders;
SELECT * FROM Customer, orders where Customer.custid=Orders.custid;

SELECT * FROM orders, Customer
where Customer.custid=Orders.custid;
group by Customer.custid;

-- 3-23 example
SELECT name, saleprice
FROM Customer, Orders
WHERE Customer.custid=Orders.custid;
group by Customer.custid;

-- 3-24 example
SELECT name, sum(saleprice)
From customer, orders
WHERE Customer.custid=Orders.custid
Group by customer.name
Order by customer.name;

-- 3-25 example
select customer.name, Book.bookname
From customer, Orders, Book
WHERE (customer.custid=Orders.custid) AND (Book.bookid=Orders.bookid)

-- 3-26 example
select customer.name, Book.bookname, Book.price
From customer, Orders, Book
WHERE (customer.custid=Orders.custid) AND (Book.bookid=Orders.bookid)
and Book.price>=20000; 

-- 3-27 example
select customer.name, saleprice
from customer LEFT JOIN Orders ON Customer.custid=Orders.custid;

select Customer.name, Orders.saleprice
from Customer, Orders
where Customer.custid=Orders.custid;

-- 3-28 example
select b1.bookname
from Book WHERE price = (
select max(price)
from book
where price < 15000);

select * from Book;
-- 4-8  example
select orderid, orderdate, custid,bookid from Orders
where orderdate = str_to_date('20240707', '%Y%m%d');

select orderid, date_format(orderdate, '%Y%m%d'), custid, bookid from Orders
where orderdate = str_to_date('2040707', '%Y%m%d');

use madangdb;
create table Mybook(
	bookid int primary key,
    price int);
insert into Mybook(bookid, price) value (1, 10000);
insert into Mybook(bookid, price) value (2, 20000);
insert into Mybook(bookid, price) value (3, null);

select price + 100 from Mybook where bookid = 3;
select sum(price), avg(price), count(*), count(price), count(bookid)
from Mybook;

-- 4-10 example
select name '이름', IFNULL(phone, '연락처없음') '전화번호'
from Customer;

-- 4-11 example
set @seq:= 0;
select (@seq:=@seq+1) '순번', custid, name, phone
from Customer
where @seq < 2;

-- 4-12 example
select orderid, saleprice
From Orders
WHERE saleprice <= (select avg(saleprice)
FROM Orders);

-- 4-13 example
select orderid, custid, saleprice
FROM Orders od1 where saleprice > (SELECT AVG(saleprice) FROM Orders od2
where od1.custid=od2.custid);

-- 4-14 example
select sum(saleprice) 'total'
from Orders
where custid IN (select custid FROM Customer WHERE address LIKE '%대한민국%');

-- 4-15 example
select orderid, saleprice
from Orders
where saleprice > ALL (SELECT saleprice
						from Orders
                        WHERE custid ='3'); 
                        
-- 4-16 example
select sum(saleprice) 'total'
from Orders od
where EXISTS(select * from  CUstomer cs WHERE address LIKE '%대한민국%' AND cs.custid=od.custid);

-- 4-17 example
select (select name
		FROM Customer cs
		WHERE cs.custid=od.custid) 'name', sum(saleprice) 'total'
FROM Orders od 
GROUP BY od.custid;

UPDATE Orders
SET bname =(	SELECT bookname
				FROM Book
				where Book.bookid = Orders.bookid)
where bookid=1;

-- 4-18 example
ALTER TABLE Orders ADD bname VARCHAR(40);
UPDATE Orders
SET bname = (SELECT bookname
			FROM Book
            WHERE Book.bookid=Orders.bookid);
            
-- 4-19 example
select cs.name, sum(od.saleprice) 'total'
FROM (select custid, name
		FROM Customer 
        WHERE custid <= 2) cs, 
        Orders od
WHERE cs.custid=od.custid
GROUP BY cs.name;
            


