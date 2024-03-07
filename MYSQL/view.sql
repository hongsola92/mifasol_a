use madangdb;

create view vw_Book
AS SELECT *
FROM Book
WHERE bookname LIKE '%축구%';

SELECT * FROM vw_Book;

-- 4-20 example
CREATE VIEW vw_Customer
AS SELECT * FROM Customer
WHERE address LIKE '%대한민국%';

-- 4-21 example
CREATE VIEW vw_Orders (orderid, custid, name, bookid, bookname, saleprice, orderdate)
AS SELECT od.orderid, od.custid, cs.name, od.bookid, bk.bookname, od.saleprice, od.orderdate
FROM Orders od, Customer cs, Book bk
WHERE od.custid=cs.custid AND od.bookid=bk.bookid;

SELECT orderid, bookname, saleprice
FROM vw_Orders
WHERE name = '김연아';

-- 4-22 example

select * from vw_Customer;

CREATE OR REPLACE VIEW vw_Customer (custid, name, address)
AS SELECT custid, name, address
FROM Customer
WHERE address LIKE '%영국%';

drop view vw_Customer;

insert into vw_Customer value (6, "홍솔아", "영국 계룡");
insert into vw_Customer value (7, "박정석", "영국 대전", "000-0000-0101");
