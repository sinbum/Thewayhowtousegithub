# print("Hello, World!")
# print(5)
# print(-10)
# print(3.14)
# print(1000)
# print(5+3)
# print(2*8)
# print(3*(3+1))
# print('balloon')
# print('butterfly')
# print('butterfly'*9)
# print(5 > 10)
# pritn(5 < 10)
# print(true)
# print(false)
# print(not True)
# print(not False)
# print(not (5 > 10))



#애완동물을 소개해 주세요~
# animal = "강아지"
# name = "댕댕이"
# age = "4"
# hobby = "산책"
# is_adult = age >= 3

# print("우리집 " + animal + "의 이름은 " + name + " 예요 ")
# print(+ name + "는 "+ str(age) + "살이며" + hobby +"을 아주 좋아해요")
# print(+ name + "는 몇살일까요?" + str(is_adult)

#애완동물을 소개해 주세요~
# animal = "개"
# name = "댕댕이"
# age = "4"
# hobby = "산책"


# print("우리집 " + animal +"의 이름은" + name + "에요")
# print(name + "는 " + str(age) + "살이며, " + hobby + "을 아주 좋아해요")
# print(name + "는 어른일까요?")

# # 주석 달기 비주얼 스튜디오 코드

# crtl + /

# print("Hello,World")
# a = 1
# b = 2
# print( b + a )
# c = False

# kitchen = {"water tab","pot","spoon","cisor","cup","plate"}

# print (type(kitchen))
# print (kitchen)




# def say_hello(name="genius"):
#   print("hello", name)


# say_hello("saetbyeol")
# say_hello()  

# if 1 + 1 == 2:
#     print("this is correct")
# else: 
#     print("this is not correct")

# def quiz():
#     answer = input('1 + 2 = 5')
#     return 1 + 2 == int(answer)

#     quiz()


# 정의문 def인에 대해서
# def say_hello(name, age) :
#     return f"Hello {name} you are {age} years old"

# hello = say_hello(age="nico",name="12")

# print(hello) #자기 소개하기

# def profile (name,age,unlike,like,where) :
#         return f"hello!! {name}, you are from {where} and {age} years old, also specialy {like} is one of favorit but you don't like {unlike}"

# saetbyeol = profile(name="saetbyeol",age="32",unlike="to be scared",like="explore food",where="seoul")
# sinbum = profile (name="sinbum",age="30",unlike="to be fat",like="watching movie",where="dangjin")
# print(saetbyeol)
# print(sinbum)


# a=int(10)
# b=int(30)
# c=str(10)

# d= (a) + (b) + int(c) # 사람이 집접 입력한 c는 str이지만 아래와 같이 int로 정의 해서 묶어주어 오류를 제거
# print(d) 

# 계산기 만들기
# def plus():
#     print (int((a)+(b)))
# a=1
# b=2

# plus()



def plus() :
    A = input ("(plus)첫번째 숫자를 입력하세요")
    
    B = input ("(plus)두번째로 더할 숫자를 입력하세요")
     
    C = (int(A) + int(B))
    print (int(C))

def minus ():
    A = input ("(minus)첫번째 숫자를 입력하세요") # 첫번째 입력할값 선정
    
    B = input ("(minus)두번째 숫자를 입력하세요") # 두번째 입력할값 선정
    
    C = (int(A) - int(B)) #계산

    print (int(C))

def times ():
    A = input ("(times)첫번째 숫자를 입력하세요") # 첫번째 입력할값 선정
     
    B = input ("(times)두번째 숫자를 입력하세요") # 두번째 입력할값 선정
     
    C = (int(A) * int(B)) #계산
    
    print(C)

def division ():
    A = input ("(division)첫번째 숫자를 입력하세요") # 첫번째 입력할값 선정

    B = input ("(division)두번째 숫자를 입력하세요") # 두번째 입력할값 선정

    C = (int(A) / int(B)) #계산

    print (int(C))

def neg ():
    A = input ("(neg)첫번째 숫자를 입력하세요") # 첫번째 입력할값 선정
    
    print (-int(A))

def power ():
    A = input ("(power)첫번째 숫자를 입력하세요") # 첫번째 입력할값 선정

    B = input ("(power)두번째 숫자를 입력하세요") # 두번째 입력할값 선정

    C = (int(A) ** int(B)) #계산

    print(C)
    
def remainder ():
    A = input ("(remainder)첫번째 숫자를 입력하세요") # 첫번째 입력할값 선정

    B = input ("(remainder)두번째 숫자를 입력하세요") # 두번째 입력할값 선정

    C = (int(A) % int(B)) #계산
    print(C)

def menu () :
    print("-----------------")
    print("1. 더하기")
    print("2. 빼기")
    print("3. 곱하기")
    print("4. 나누기")
    print("5. 제곱근")
    print("-----------------")
    
    number = input (" 사용할 기능의 번호를 입력하세요 ")
    



    if int(number) == 1 : // 자꾸 오류가 나길래 여기부분에서는 number를 인트로 묶어주어야한다.
        plus()
    else:   
        print ("잘못된 입력입니다.")
        print ("input value : ", number)
        print ("input value type : ", type(number))
    


menu()


