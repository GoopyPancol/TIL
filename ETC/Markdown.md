# MarkDown
___
##  GFM이란?
   * GFM은 표준 Markdown(SM)에 조금더 편하게 변경한 github 버젼입니다. 그리고 Markdown은 Plain text로 작성된 파일을 HTML로 변경해서 보여주기 위한 문법입니다.
   
##  GFM 문법

#### 1. <줄바꿈>

  * SM이랑 가장 큰 차이점으로 문장의 줄바꿈을 그대로 반영합니다.(즉, “enter”로 줄바꿈 구분함)
#### 2. <헤더>


```
H1 = 또는 #

H2 – 또는 ##

H3 ### , H4 #### , H5 ##### , H6 ######

(=), (-) 은 연속으로 몇개가 오든 상관없이 동작합니다.
```

#### 3. <Blockquotes>


 ```
 >,>> 등
 ```
 
#### 4. <리스트>


```
+ 가 -> <li>가</li>

* 가 -> <li>가</li>

– 가 -> <li>가</li>

(+), (*), (-)는 모두 똑같이 동작하며 (기호 + “공백” + 내용) 입니다.
```

#### 5. <숫자리스트>
```
1. 가

2. 나

숫자 + “.” + “공백” + 내용 (“.” 뒤에 공백이 와야 리스트 입니다.)
ex) 1 + . +  + 가
```

#### 6. <코드>

```
빈줄을 하나 만들고 ``` 로 시작해서 ``` 으로 끝내면 됩니다.

코드의 색 구분은 ```[본인이 원하는 언어]     ex)```java

코드 안에서는 자동으로 escap 처리를 해줍니다.(<, > 등등)

리스트안에서 코드는 ``` 로 해줘야 합니다.
```

#### 7. <링크>


```
[링크명](url)
```

#### 8. <강조>

```
글자양옆에 ** 사용 

ex)**강조**
```
#### 9. <이미지>

```
Inline-style: 
![alt text](http://static.naver.net/www/mobile/edit/2016/0705/mobile_212852414260.png "Logo Title Text 1")

Reference-style: 
![alt text][logo]

[logo]: http://cdn.lezhin.com/old-assets/home.png "Logo Title Text 2"
```
Inline-style: 
![alt text](http://static.naver.net/www/mobile/edit/2016/0705/mobile_212852414260.png "Logo Title Text 1")

Reference-style: 
![alt text][logo]

[logo]: http://cdn.lezhin.com/old-assets/home.png "Logo Title Text 2"
---

## Refer
[https://github.com/milooy/TIL/blob/master/ETC/Markdown-Cheatsheet.md](https://github.com/milooy/TIL/blob/master/ETC/Markdown-Cheatsheet.md)
[https://teragoon.wordpress.com/2012/04/04/github에서-readmemd-작성하기markdown-문법/](https://teragoon.wordpress.com/2012/04/04/github에서-readmemd-작성하기markdown-문법/)
    
