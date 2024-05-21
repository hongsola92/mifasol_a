def min():
     somebody = input("Ener your name: ")
     print("Hi", somebody, "How are you today?")
     print(f"Hi {somebody} How ar you today?")

     # 3을 세번 곱해준게 아니라 3이라는 string을 3번 출력해줌.
     #inta = input("Enter a number: ")
     #print(inta*3) 
     
     inta = int(input("Enter a number:" ))
     print(inta * 3)    # inta = input으로 쓰는경우 string으로 인식하기때문에 앞에 형식을 써줘야한다.


if __name__ == "__main__":
     min()