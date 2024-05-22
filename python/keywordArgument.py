def print_something(my_name, your_name):
     print(f"Hello {your_name}, my name is {my_name}")

def print_something2(my_name, your_name = "TEAMLAB"):
     print(f"Hello {your_name}, my name is {my_name}")

def main():
     print_something("Sol a", "TEAMLAB")
     print_something(your_name = "TEAMLAB", my_name="Sol a")
     print()
     print_something2("Sol a", "BINDSOFT")
     print_something2("Sol a")
     
if __name__ == "__main__":
     main()