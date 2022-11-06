# web APLs

## DOM

- DOM：用来改变网页内容，结构，样式的文档对象
- 用document表示，页面中所有的标签都是元素，用element表示，网页中所有的内容都是节点，用node表示
- 

## 获取元素

- 1. getElementById 获取带有ID元素
   - 1. 文档页面从上往下加载，先得有标签，所以script在标签下面

     参数id是大小写敏感的 字符串!
     返回的是一个元素对象object
     console.dir 打印返回元素对象，更好的查看里面的属性和方法

- 2. 标签名获取元素
   - 1. document.getElementsByTagName('标签名')

    获取过来元素对象的集合，以伪数组的形式存储
    如果页面中没有这个元素，返回的值是空的伪数组

   - 2. 获取某个元素（父元素）内部所有指定标签名的子元素

    element.getElementsByTagName('标签名')
    父元素必须是单个对象（必须指明是哪一个元素对象），获取的时候不包括父元素自己

- 3. 通过html5新增的方法获取
   - 1. Document.getElementByClassName('类名')  根据类名返回元素对象集合 
   - 2. document.querySelector('选择器')  返回指定选择器的第一个元素对象

     里面的选择器需要加符号  类选择器= .xxx   id选择器= #xxx  标签选择器不需要加符号

   - 3. document.querySelectorAll('选择器')  根据指定选择器返回
- 4. 获取元素
   - 1. body
   eg. let bodyEle = document.body
   - 2. html元素
   eg. let  htmlEle = document.documentElement

## 事件基础

- 1. 事件=事件源+事件类型+事件处理程序
   - 事件源=事件被触发的对象+谁+按钮
   - 事件类型=如何触发+什么事件（如鼠标点击onclick)
   - 事件处理程序=通过函数赋值的方法完成

## 操作元素

- 1. 改变内容
   - 1. element.innerText  标签里面的文本内容，不识别html标签 空格 换行
   - 2. element.innerHTML  标签里面的文本内容，识别html标签 空格 换行(只能改变普通盒子里面的内容，eg.div盒子)
- 2. 表单属性修改
   - 注意：表单里面的值 文字内容是通过value来修改的
   - 1. 想要某个表单被禁用，不能再点击 disabled

      eg. but.disabled=true;
        ==this.disabled=true; //this 指向的是此事件函数的调用者 but

- 3. 样式属性修改
   - 1. element.style  行内样式操作
   - 2. element.className  类名样式操作
