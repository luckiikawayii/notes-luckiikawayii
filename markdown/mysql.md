create table tb_student(

    ->     ->     -> sno char(7) primary key,
    ->     ->     -> sname varchar(10) not null,
    ->     ->     -> edate date,
    ->     ->     -> ssex char(2) default "男",
    ->     ->     -> sage int,
    ->     ->     -> tel char(11) unique,
    ->     ->     -> classname varchar(30),
    ->     ->     -> foreign key(classname) references tb_class(classname));

create table tb_class(

    -> classname varchar(30) primary key,
    -> cdept varchar(10) default "计算机与工程信息学院",
    -> aname varchar(10) not null,
    -> atel char(11));
    取消主键： alter table 表名 drop primary key;
    修改数据库长度：alter table 表名
    modify column 项目
    varchar(长度);
              
