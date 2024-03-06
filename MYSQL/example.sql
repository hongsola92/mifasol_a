-- example 1
select bookname, price from Book;
-- example 2
select price, bookname From Book;
-- example 3-2
select bookid, bookname, publisher, price from Book;
-- example 3-3
select publisher From Book;
select DISTINCT publisher FROM Book;
-- example 3-4
select * FRom Book WHERE price < 20000;
select * from Book;
-- example 3-5
select * FROM Book WHERE PRICE between 10000 AND 20000;
select * FROM Book WHERE PRICE >=10000 AND PRICE <= 20000;
-- example 3-6
select * from Book Where publisher IN('굿스포츠','대한미디어');
select * from Book Where publisher NOT IN('굿스포츠','대한미디어');
-- example 3-7
select bookname 책이름, publisher 발행자 From Book Where bookname LIke'축구의 역사';
select bookname, publisher From Book Where bookname LIKE '축구%';
-- EXAMPLE 3-9
SELECT * from Book where bookname Like '_구%';
-- example 3-10
select * from Book where (bookname LIKE '%축구%') and (price >=20000);
-- example 3-11
select * from Book where (publisher = '굿스포츠') OR (publisher = '대한미디어');
-- example 3-12
select * from Book ORDER BY bookname;
select * from Book ORDER BY bookname desc;
-- example 3-14
select * from Book ORDER BY price DESC, publisher ASC;
-- example 3-15
select * from Orders;
SELECT SUM(slaeprice) 총판매액 from Orders;
SELECT SUM(saleprice) 총매출 from Orders where custid=2;
-- example 3-17
select sum(saleprice) as 총,
       avg(saleprice) as 평균값,
       min(saleprice) as 최저가,
       max(saleprice) as 최고가
FROM Orders;
-- example 3-18
select count(*) from Orders;
select count(*) from Customer;
select count(phone) from Customer;
-- example 3-19
select sum(saleprice) 총매출, count(*) 권수 FROM Orders GROUP BY custid;
-- example 3-20
select sum(saleprice) 총매출, count(*) 권수 FROM Orders 
where saleprice >=8000 
Group by custid 
having count(*) >=2;