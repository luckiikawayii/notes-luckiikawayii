## web APLs

- 一.getElementById 获取元素
- 1. 文档页面从上往下加载，先得有标签，所以script在标签下面
-    参数id是大小写敏感的字符串
     返回的是一个元素对象
     console.dir 打印返回元素对象，更好的查看里面的属性和方法

- 二. 标签名获取元素
- 1. document.getElementsByTagName('标签名')
    获取过来元素对象的集合，以伪数组的形式存储
    如果页面中没有这个元素，返回的值是空的伪数组

- 2. 获取某个元素（父元素）内部所有指定标签名的子元素
    element.getElementsByTagName('标签名')

- 三. 通过html5新增的方法获取
- 1. Document.getElementByClassName('类名')  根据类名返回元素对象集合 
- 2. document.querySelector('选择器')  返回指定选择器的第一个元素对象
     里面的选择器需要加符号  类选择器= .xxx   id选择器= #xxx  标签选择器不需要加符号

- 3. document.querySelectorAll('选择器')  根据指定选择器返回
- 四. 获取元素
- 1. body
   eg. let bodyEle = document.body
- 2. html元素
   eg. let  htmlEle = document.documentElement
