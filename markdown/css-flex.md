# 一.flex布局
- 原理：通过给父盒子添加flex属性，控制盒子的位置和排列顺序
- 1.flex-direction: 设置主轴方向
-   默认的主轴是x轴，即flex-direction: row
-   默认侧轴是y轴，元素是跟着主轴来排列的
-   flex-direction：设置谁，谁为主轴
-   row: 从左往右  row-reverse: 从右往左  column：从上到下  column-reverse: 从上到下
- 2.justify-content: 设置主轴上子元素的排列方式
-   默认主轴为x轴的情况  flex-start: 从左往右  flex-end: 从右往左  center: 主轴居中对齐  space-around: 平分剩余空间  space-between: 先两边贴边，再平分剩余空间
- 3.flex-wrap: 设置子元素是否换行
-   默认不换行
-   另起一行：flex-wrap: wrap    
- 4.align-content: 设置侧轴上的子元素排列方式（多行）
-   设置单行情况下无效
-   flex-start: 默认值在侧轴头部开始排列  flex-end: 侧轴尾部开始排列  center: 侧轴中间显示  space-around: 子项在侧轴平分剩余空间  space-between: 子项在侧轴先分部在两头，再平分剩余空间  stretch: 设置子项元素高度平分父元素高度
- 5.align-items: 设置侧轴上的子元素排列方式 （单行）
-   flex-start: 从上到下  flex-end: 从下到上  center: 垂直居中  stretch: 拉伸（不能设置高度） 
- 6.flex-flow: （复合属性）相当于同时设置了flex-direction, flex-wrap
# 二.flex属性
- 1. 子项目分配剩余空间 .item {flex: number} 
- 2. span:nth-child(number){侧轴上的排列方式 eg.order: -1 默认是0}
-          align-self: flex-end (单个排列的位置)    
