class SoccerPlayer:
     def __init__ (self, name, position, age):
          self.name = name
          self.position = position
          self.age = age

     def change_age(self, age = 10):
          self.age = age

     def __str__(self):
          return f"Hello, My name is {self.name}. I'm {self.age} years old and I play in {self.position}."

def main():
     player1 = SoccerPlayer('홍솔아', '미드필더', 31)
     player2 = SoccerPlayer('민병근','공격수', 29)
     print(player1.name)
     print(player2.name)
     print(player1.position)
     print(player1.age)
     player1.change_age()
     print(player1.age)
     player1.change_age(41)
     print(player1.age)
     print(player1.__str__())
     print(player1)

if __name__ == '__main__':
    main()