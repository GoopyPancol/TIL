# 메소드(method)
____
### 1. 메소드란?
* 메소드(method)는 코드를 재사용할 수 있게 해준다. 경제적으로 로직을 작성할수 있다.

### 2. 메소드의 형식
```java
public static void main(String[] args){    //main이라는 것이 메소드
return ;
}
```

### 3. 메소드의 정의와 호출
```java
public static void numbering() {  //numbering 이라는 메소드를 정의
int i = 0;
while (i < 10) {
System.out.println(i);
i++;
}
}

public static void main(String[] args) {
numbering();    //메소드를 호출
}
```
### 4.매개변수와 인자
```java
public static void numbering(int limit) {    //limit가 매개변수
int i = 0;
while (i < limit) {
System.out.println(i);
i++;
}
}

public static void main(String[] args) {
numbering(5);     //5가 인자
}
```

### 5.복수의 인자
```java
public static void numbering(int init, int limit) {  //매개변수 정의
int i = init;
while (i < limit) {
System.out.println(i);
i++;
}
}

public static void main(String[] args) {
numbering(1, 5);      //두개의 인자
}
```

# return
--------

### 1.  return이란?
* return은 메소드를 종료시키고 값을 외부로반환한다.
```java
public 리턴자료형 메소드명(입력자료형1 입력변수1, 입력자료형2 입력변수2, ...) {
return 리턴값;  // 리턴값이 void 인 경우에는 return 문이 필요없다.
}
```

### 2. 메소드의 출력값
```java
public static String numbering(int init, int limit) {
int i = init;
// 만들어지는 숫자들을 output이라는 변수에 담기 위해서 변수에 빈 값을 주었다.
String output = "";
while (i < limit) {
// 숫자를 화면에 출력하는 대신 변수 output에 담았다.
output += i;
i++
}
// 중요!!! output에 담겨 있는 문자열을 메소드 외부로 반환하려면 아래와 같이 return 키워드 뒤에 반환하려는 값을
// 배치하면 된다.
return output;
}

public static void main(String[] args) {
// 메소드 numbering이 리턴한 값이 변수 result에 담긴다.
String result = numbering(1, 5);
// 변수 result의 값을 화면에 출력한다.
System.out.println(result);
}
```
### 3. 메소드의 오류
* return 은 메소드를 종료시키는 역할을 한다. 그러므로 처음 return 값 이후에는 구문이 실행되지 않는다.
```java
public static int one() {
return 1;
return 2;
return 3;
}

public static void main(String[] args) {
System.out.println(one());
}
```
### 4. 여러가지 메소드
#### 메소드는 입출력에 유무에 따라 4가지로 분류할 수 있다.
* 입력과 출력이 모두있는 메소드
```java
public int sum(int a, int b) {
return a+b;
}
```
* 입력과 출력이 모두없는 메소드
```java
public void say() {
System.out.println("Hi");
}
```
* 입력만 있고 출력은 없는 메소드
```java
public void sum(int a, int b) {
System.out.println(a+"과 "+b+"의 합은 "+(a+b)+"입니다.");
}
```
* 입력은 없고 출력만 있는 메소드 
```java
public String say() {
return "Hi";
}
```

#### refer
[https://www.opentutorials.org/course/1223/5369](https://www.opentutorials.org/course/1223/5369)


