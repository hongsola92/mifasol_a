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
select Customer.name, Book.bookname, Book.price
FROM customer, Orders, Book
WHERE (customer.custid=Orders.custid) AND (Book.bookid=Orders.bookid)
and Book.price>=20000; 

-- 3-27 example
select customer.name, saleprice
from customer LEFT outer JOIN Orders ON Customer.custid=Orders.custid;

select Customer.name, Orders.saleprice
from Customer, Orders
where Customer.custid=Orders.custid;

-- 3-28 example

select bookname
from Book
where price=(
select max(price)
from Book
where price < 15000);

-- 3-29 example

select name from Customer
where custid in(select custid from Orders);

-- 3-30 example

select name
from Customer
where custid in(select custid
				from Orders
				where bookid in(select bookid
								from Book
                                where publisher='대한미디어' ));

-- 3-31 example
select b1.bookname, b1.publisher, b1.price
from book b1
where price > (select avg(b2.price) from book b2
where b2.publisher = b1.publisher);

select publisher, avg(price) from Book group by publisher;

-- 3-32 example
select name from Customer where address LIKE '대한민국%'
union all
select name from Customer where custid in (select custid from Orders);

-- 3-33 EXAMPLE
SELECT name, address FROM Customer cs 
WHERE EXISTS (SELECT * FROM Orders od WHERE cs.custid=od.custid);