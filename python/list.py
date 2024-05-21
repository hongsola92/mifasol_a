def min():
     colors = ["red", "green", "blue", "purple", "yellow", "black"]
     number = [12, 25, 71, 3.14, 7.8235]
     
     print(colors)
     # print(colors)
     # print(colors[0])
     # print(colors[1])
     # print(colors[2])
     for c in colors:
          print(c)
     print(len(colors))
     print(colors[5:8])
     print(colors[0:11:1])     # 1로 써둔 부분은 한칸 넘기고 쓰겠다. 2로 바꾸면 두칸
     print(colors[::-1])      # 거꾸로 나오게함.


     # 리스트 연산
     totla_list = colors + number
     print("white" in colors)
     
     colors.extend(number)
     colors.append(number)   # type: ignore // colors 배열에 white를 추가하고 싶은경우
     colors.insert(0, "orange")
     colors.remove("white")   # remove == 지우고싶은 리스트의 값
     
     colors = colors * 2
     print(totla_list)
     print(colors)
     print("white" in colors)

if __name__ == "__main__":
     min()