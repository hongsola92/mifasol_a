class Abc:     # class Abc(object)와 같음.
     pass

def main():
     a = int ()
     a = 7.1
     a = "Hello, World"
     #python은  int,string,float 같은경우 class임에도 불구하고 소문자로 씀.
     aStr = "astring" 
     aNoIntString = "abcd"
     aYesString = "1234"
     a_yes_int_string = "56789"
     
     o = object()
     print(o)
     print(a)
     print(type (a))
     print(issubclass(type(a), int))
     print(issubclass(type(o), object))
     print(issubclass(int, object))
     print(issubclass(float, object))
     print(issubclass(Abc))

if __name__ == "__main__":
     main()

