import csv

def main():
    seongnam_data = []
    header = []
    rownum = 0
    filename = "/home/ssorra/mifasol_a/pythonData/korea_floating_population_data.csv"
    with open(filename, "r", encoding="utf8") as f:
        csv_data = csv.reader(f)
        for row in csv_data:
            if rownum == 0:
                header = row  # header 저장
            else:
                location = row[7]  # 'location' 필드가 8번째 열이라고 가정
                if "성남시" in location:
                    seongnam_data.append(row)
            rownum += 1

    filename2 = "/home/ssorra/mifasol_a/pythonData/seongnam_floating_population_data.csv"
    with open(filename2, "w", encoding="utf8") as f:
        writer = csv.writer(f, delimiter="\t", quotechar="'", quoting=csv.QUOTE_MINIMAL)
        writer.writerow(header)  # 헤더 쓰기
        writer.writerows(seongnam_data)  # 데이터 쓰기

if __name__ == "__main__":
    main()