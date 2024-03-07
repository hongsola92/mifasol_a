use madangdb;
create index ix_Book_1 on Book(bookname);
create index ix_Book_2 on Book(publisher, price);

select * from Book where publisher='대한미디어' AND price >= 30000;
select * from Book where bookname LIKE '축구%';
select * from Book;

drop index ix_Book_1 ON Book;

analyze table Book;