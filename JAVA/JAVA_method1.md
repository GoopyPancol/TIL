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
