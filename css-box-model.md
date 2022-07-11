# 盒子模型：边框，外边框，内边框，实际内容

## 一. 边框

- border边框： solid实线边框 dashed虚线边框 dotted点线边框

- 语法  border:border-width||border-style||border-color
- 边框复合写法  border:1px solid red; (没有顺序)（可以给盒子单条边写样式）
- 合并相邻边框：border-collapse: collapse

## 二. 内边距

- 内边距:padding设置边框与内容之间的距离
- 复合写法：（顺时针）
`padding：5px` (上下左右都是5像素)
`padding：5px 10px` (上下5像素，左右10像素)
`padding: 5px 10px 15px` （上5像素，左右10像素，下15像素）
`padding: 5px 10px 15px 20px ` （上5像素，右10像素，下15像素，左20像素）
- 若要效果图片大小保持一致，要让width/height减去多出来的内边距
- 如果盒子没有指定width/height属性，此时padding与盒子一样大
