#ifndef DATE_H
#define DATE_H
/*
struct date {
	int year;
	int month;
	int day;
};

typedef Date Date;
*/

typedef struct {
	int year;
	int month;
	int day;
} Date;

void printDate1(Date d);
void printDate2(const Date *pd);

#endif

