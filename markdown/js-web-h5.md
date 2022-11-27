## 一.h5自定义属性

- 1. 规定自定义属性以date-开头作为属性名并赋值
-  eg.<div data-index='1'></div>
-    设置：element.setAttribute('data-index', 2) .  兼容性较好
-    引用：div.dataset.index  只能获取data-开头的
- 2. 自定义属性里面有多个-链接的单词，则采用驼峰命名法
- 3. 
