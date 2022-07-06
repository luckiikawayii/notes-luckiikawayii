# 0705

# 一. 问题
* 1. 帮我看一下test-biaoge-eg.html文件里面代码的格式对不对，我跟视频里面的代码排列不一样但是做出来的效果是一样
* shift + option + f
* 2. 写代码的时候怎么把几个网址放在一起，点击关键词时可以去各自的网站

```html
<a href="https://www.zhihu.com">知乎</a>
<a href="https://www.baidu.com/">百度</a>
<a href="https://cn.bing.com/translator/">bing翻译</a>
```

# 二. 内容

## 1. 表格标签（不常用, css设置）

*  第一行是以th开头的表头单元格   
*  第二行是以td开头的普通单元格

```html
 <table>
     <tr>
         <td>xxx</td>
         <td>xxx</td>
         <td>xxx</td>
     </tr>
     <tr>
         <td>xxx</td>
         <td>xxx</td>
         <td>xxx</td>
     </tr>
 </table>
```

## 2. 表格属性（属性要写到表格标签table里面）

* align:left/center/right位置对齐  border: 边框  cellpadding: 文字与边框距离   cellspacing: 每两个格子之间的距离   width: 宽度   height: 高度

## 3. 合并单元格

*  跨行合并：rowspan="个数"  以最上面的目标单元格为基础
*  跨列合并:colspan="个数"   以最左边的单元格为基础

## 4. 列表标签(布局)

*  无序列表（没有顺序, 有小点，`<ul>`里面只能放`<li>`, `<li>`里面可以放别的标签）
  

```html
  <ul>
      <li>列表1</li>
      <li>列表2</li>
  </ul>
```

## 5. 有序列表（有顺序, `<ol>` 只能放 `<li>` , `<li>` 里面能放别的标签）

```html
  <ol>
      <li>列表1</li>
      <li>列表2</li>
  </ol>
```

## 6. 自定义列表（ `<dl>` 里面只能放 `<dt>`  `<dd>` , 一个 `<dt>` 对应多个 `<dd>` ，）

```html
  <dl>
      <dt>xxx
  </dl>
  <dd>解释1</dd>
  <dd>解释2</dd>
  </dl>
```

## 7. 表单标签

* 表单域:`<form>`标签
* `<form>`传递范围内表单元素
* `<form action="url地址" method="提交方式" name="表单域名称">各种表单元素控件`   `</form>`
* 表单元素:`<input>`单标签
*  `<input type="属性">`

- 
