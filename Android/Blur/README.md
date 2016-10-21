BlurredView
====

* 안드로이드 ImageView에 blur처리 하는 방법. 이 라이브러리는 RenderScript을 기반으로합니다. 이 라이브러리에  대한 자세한 내용을 확인해 봅시다.


![demo][1]
![demo][2]


## Gradle
```java
compile 'com.qiushui:blurredview:0.8.1'
```
## Enable RenderScript support mode
```java
defaultConfig {
renderscriptTargetApi 19
renderscriptSupportModeEnabled true
}
```
## 사용방법
```xml
<com.qiushui.blurredview.BlurredView
android:id="@+id/blur"
app:src="@drawable/rain"
app:move="true"
android:layout_width="match_parent"
android:layout_height="match_parent"/>
```
* `` app:src="@drawable/rain"``로 사진을 선택할 수 있습니다. 또는 `` mBlurredView.setBlurredImg();`` 로 JAVA 코드 안에서 선택할 수도 있습니다.
* ``mBlurredView.setBlurredLevel(int alpha)`` 로  투명도 레벨을 0부터 100사이의 숫자로 지정할 수 있습니다.
* blur 이미지를 움직일 수 있습니다. xml에 ``app:move="true"``을 입력한 후 자바에서 ``mBlurredView.setBlurredTop(int topDistance)`` 을 0부터 100사이의 숫자로 지정하면 움직임을 사용할 수 있습니다.

## refer
[https://github.com/wl9739/BlurredView](https://github.com/wl9739/BlurredView)

License
-------
```
Copyright 2016 Qiushui

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
```

[1]:https://github.com/GoopyPancol/TIL/blob/master/Android/Blur/png/blur0.jpeg
[2]:https://github.com/GoopyPancol/TIL/blob/master/Android/Blur/png/blur100.jpeg

