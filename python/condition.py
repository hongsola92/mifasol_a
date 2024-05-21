def min():
     myage = int(input("너 몇살이야: "))
     if (myage < 30) and (myage < 50): 
          print("환영하오. 클럽에 가입되었소.")
     else:
          print("안돼 너무 늙었어 우리클럽엔 못들어와.")

     if True:
          print("참이여")
     if False:
          print("거짓이여")
     if 2:
          print("참")
     if 0:
          print("거짓")
     if 0.0:
          print("거짓")
     if 0.0001:
          print("참")
     if "":
          print("거짓")
     if "abc":
          print("참")
     if None:
          print("거짓")
     if []:
          print("거짓")
     if [1,2,3]:
          print("참")


if __name__ == "__main__":
     min()