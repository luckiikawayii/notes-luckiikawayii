## 一. 使图形发生改变

- 1. 静态旋转：transform:rotate(xxdeg)  xx为正数则顺时针旋转，为负数则逆时针旋转
-   若要网页兼容，则改为-webkit-transform:rotate(xxdeg)
- 2. 静态放大缩小：transform:scale(xx)    xx为 x，y轴 放大比例
-    若要以x轴缩放，则为transform:scaleX(xx) 
-    若要以y轴缩放，则为transform:scaleY(xx) 
- 3. 倾斜:transform:skew(xx)
-    一个参数时表示水平方向的倾斜角度
-    两个参数时，第一个表示水平倾斜角度，第二个表示垂直倾斜角度
- 4. 移动：transform:translate(xx)
-     一个参数时表示水平移动距离
-    两个参数时，第一个表示水平移动距离，第二个表示垂直方向移动距离

## 二. 鼠标经过时图形大小发生变化

- 1. :hover里面设置x, y轴放大倍数

## 三. css3 transitions过渡动画制作

- 1. transition-property   过渡css属性的名称 eg.width height
- 2. transition-duration   定义过渡效果花的时间，默认为0则没有动画
- 3. transition-timing-function 规定过渡效果的时间曲线，默认ease
- 4. transition-delay      规定过渡效果何时开始，默认为0则没有动画

## 四. 直线动画

- 1. animation - name  规定＠keyframes 动画的名称。
- 2. animation - duration   规定动画完成一个周期所花费时间， time 值以秒或毫秒计，默认是0。
- 3. animation - timing - function 规定动画的速度曲线。
- 4. animation - delay   规定动画开始前的延迟， time 值以秒或毫秒计，默认是0，可选。
- 5. animation - iteration - count 规定动画被播放的次数 n ，默认是1。 infinite 规定动画应该无限次播放。
- 6. animation-direction  规定动画是否在下一周期逆向播放。normal 默认值，动画应该正常播放。alternate 动曲应该轮流反向播放。
 
 
