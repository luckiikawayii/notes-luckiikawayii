# roadmap for web development

# guide

- web dev fundamentals
  - html tags
  - css: selector, box-model, layout(position/flex)
  - js: grammar, utils, react-framework

- [前端第一课 笔记及资料](https://github.com/prospect-garden-design/frontend-workspace/blob/main/log-yaoo/intro3-dev.md)

- 简单的 css 模版项目 (下载使用 git clone git-url)
  - https://github.com/dhg/Skeleton
  - https://github.com/uptonking/pico-css-v1-2-1
    - https://github.com/picocss/pico


- 长期计划
  - react流行项目
  - echarts 练习复杂项目，学习主流项目源码 p443-p473
  - 简单的前后端交互 ajax
  - 练习针对找实习或找工作的算法

# 0808

- 为什么学习js
  - 实现功能更强的页面交互效果
  - 灵活性更高，可以将html和css写在js里面

- js开发要点
  - js基本语法 (p1-p157)
    - 案例比较少，要在浏览器控制台测试
    - js语法是与DOM无关的
  - 常用DOM操作方法/api (p191-p246)
    - 创建元素
    - 修改元素或属性
    - 页面事件原理 p247-p265
  - js工具库，如jquery p358-p386
    - jquery已过时，只需了解，不需要练习每个案例
  - to-do-list练习简单项目、模版项目 p425-p434

- [如何循序渐进、有效地学习JavaScript？](https://www.zhihu.com/question/19713563)
  - 在dev tools => console里直接练习熟悉基本语法，变量...


# 0831
- lesson-luckiikawayii-html/css/js总结复习+自我介绍案例
- html
  - 块级元素 block
  - 行内元素 inline
- css
  - 选择器
  - 盒模型
  - 定位、布局
- js
  - 基础考察很少：数据类型、运算符、流程控制
  - 异步：setTimeout、Promise

- 培养学习和工作的习惯
  - 搜索普通问题、资料
    - google、知乎
  - 搜索面试资料
    - [语雀知识库](https://www.yuque.com/search?q=%E5%89%8D%E7%AB%AF+%E9%9D%A2%E8%AF%95&type=book&scope=%2F&tab=public&p=1)
  - 搜索开源项目，如个人介绍项目
    - [偏重css的portfolio](https://github.com/search?q=css+portfolio)
      - https://github.com/tailwindtoolbox/Profile-Card
      - https://github.com/Maclinz/JS_CSS_PortfolioProject
      - https://github.com/rammcodes/Dopefolio
    - [偏重react的portfolio](https://github.com/search?q=react+portfolio)
      - https://github.com/soumyajit4419/Portfolio


# 0827
- lesson-luckiikawayii-js内置对象、web-api
- js内置对象
  - [JavaScript标准内置对象列表](https://developer.mozilla.org/zh-CN/docs/Web/JavaScript/Reference/Global_Objects)
  - globalThis === window  // true 浏览器环境下的全局对象是window
  - window.undefined === undefined  // true
  - parseInt、parseFloat
  - arguments
  - Math
  - Date
  - JSON
  - Promise
- web-api-DOM/HTML元素相关
  - [Web API 接口参考](https://developer.mozilla.org/zh-CN/docs/Web/API)
  - document
  - element对象添加事件
  - 自己实现切换暗黑主题的示例 https://codepen.io/uptonking/pen/xxWzYJq
- web-api-浏览器或操作系统相关
  - window
  - console
  - history
  - 数据请求相关 xhr、fetch
  - 存储相关 cookie、localStorage、indexeddb
  - [Navigator](https://developer.mozilla.org/zh-CN/docs/Web/API/Navigator)
    - navigator.platform/language

- 可复用的工具库集合 npm
  - nvm 安装
    - https://github.com/nvm-sh/nvm
    - https://gitee.com/RubyKids/nvm-cn
  - css工具
    - skeleton-css
      - https://www.npmjs.com/package/skeleton-css
    - @picocss/pico
      - https://www.npmjs.com/package/@picocss/pico
    - bootstrap 只使用css部分，不要使用js部分
      - https://www.npmjs.com/package/bootstrap
      - https://github.com/twbs/bootstrap
  - js工具
    - react
      - https://www.npmjs.com/package/react
    - reactstrap
      - https://www.npmjs.com/package/reactstrap
      - https://github.com/reactstrap/reactstrap
    - react-bootstrap
      - https://npmjs.com/package/react-bootstrap
      - https://github.com/react-bootstrap/react-bootstrap
  - 颜色操作 
    - tinycolor2
      - https://www.npmjs.com/package/tinycolor2
      - https://github.com/bgrins/TinyColor
  - 日期操作
    - date-fns
      - https://github.com/date-fns/date-fns
  - url操作
    - url-join
      - https://github.com/jfromaniello/url-join
# 0822

- lesson-luckiikawayii-js基础 - 数组、对象、函数
- 数组常用方法

```JS
arr1 = [11, 22, 33];

arr2 = new Array();
arr2.push(11, 22, 33)
```

- 对象理解
  - 内置对象
  - 创建可复用的对象不要使用构造函数 new FuncName 的形式

```JS
obj1 = { p1: 11, p2: 22 };

obj2 = new Object();
obj2.p1 = 11;
obj2.p2 = 22;

function createObj(name, age) {

  return {
    name: name,
    age: age
  }
}
```

- 函数理解
  - 函数里面不要用this，因为指向不明确
  - 多用箭头函数，没有自己的this

```JS
function fn1(text) {
  console.log('; 打印', text);
  return text;
}

const fn2 = function(text) {
  console.log('; 打印', text);
  return text;
}

const fn3 = (text) => {
  console.log('; 打印', text);
  return text;
}

let sum = (a, b) => a + b;
// 等价于
let sum = function(a, b) {
  return a + b;
};

let sum2 = (a, b) => () => a + b;

fn1('hello');
fn2('hello');
```

# 0815

- js基础 数据类型、运算符operator、表达式、流程控制
  - 新的数据类型，bigint
  - typeof
  - 流程控制：顺序、选择、循环
  - if使用场景，切换主题
    - https://codepen.io/uptonking/pen/xxWzYJq
  - 循环使用场景，批量生成html元素
    - https://codepen.io/uptonking/pen/LYdpPBW


# 0805
- 使用 sass 生成 css
  - 可维护性更好
  - 积累模版

- sass vs scss
  - .sass 出现比较早，不需要写花括号
  - .scss 改进的sass，需要写花括号，更好地兼容现有css样式，同时支持sass的嵌套

- css 变量
  - [CSS 变量教程 - 阮一峰](https://www.ruanyifeng.com/blog/2017/05/css-variables.html)
  - [使用 CSS 自定义属性（变量）](https://developer.mozilla.org/zh-CN/docs/Web/CSS/Using_CSS_custom_properties)



# 0723

- 学习安排-1week
  - 媒体查询 p441-447
    - media query 媒体查询, 响应式 ui
  - rem
  - 移动端 ui
  - 模仿 skeleton.css 的样式类，并修改doc.html, iphone.html
    - 试着将标签选择器替换成类选择器

- github 仓库 拉取更新 vs 复制整个仓库
  - git clone git-url
  - git pull 只拉取最新内容
  - git clone 复制整个仓库； 也可以用来解决冲突
