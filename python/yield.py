def yield_example():
     print("yiel 함수가 호출되었습니다.")
     yield "test1"
     print("a 지점  통과")
     yield "test2"
     print("b 지점  통과")

     return "test"

def main():
     print("main 함수가 호출되었습니다.")

     yield_object= yield_example()
     next(yield_object)
     print("a 지점  통과")
 
     next(yield_object)
     print("b 지점  통과")

     print(next(yield_object))
     print("메인 함수가 종료됨")
if __name__ == "__main__":
     main()
