# 问题
- 1. 在test-box案例里面.bottom em里面的代码都没有生效，但是和它一级的.bottom span却能生效，这是为什么
- 2.
# 盒子模型：边框，外边框，内边框，实际内容

## 一. 边框

- border边框： solid实线边框 dashed虚线边框 dotted点线边框

- 语法  border:border-width||border-style||border-color
- 边框复合写法  border:1px solid red; (没有顺序)（可以给盒子单条边写样式）
- 合并相邻边框：border-collapse: collapse

## 二. 内边距

- 内边距:padding设置边框与内容之间的距离
- 复合写法：（顺时针）
- `padding：5px` (上下左右都是5像素)
- `padding：5px 10px` (上下5像素，左右10像素)
- `padding: 5px 10px 15px` （上5像素，左右10像素，下15像素）
- `padding: 5px 10px 15px 20px ` （上5像素，右10像素，下15像素，左20像素）
- 若要效果图片大小保持一致，要让width/height减去多出来的内边距
- 如果盒子没有指定width/height属性，此时padding与盒子一样大
- 清除内边距：padding: 0
  ## 三. 外边距
- margin外边距：与padding用法一致
- 居中对齐：eg.margin: 0 auto  (盒子必须有宽度，块级元素，左右外边距都设置auto)
- 行内元素或行内块元素居中：给其父元素添加text-align: center
- 清除外边距：margin: 0
- 行内元素只用设置左右内外边框，块级元素和行内块元素都设置

```
     * {
      margin: 0
      padding:0
     }
```
