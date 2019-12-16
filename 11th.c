e
 
//将远程Github网站上创建并初始化号的仓库，克隆到本地
git clone [你的Github上仓库的地址链接]
 
//添加当前仓库中的所有文件,注意add后面有一个空格
git add .
 
//本地提交，如果不需要提交到远程仓库，这就成了
git commit -m "对该版本的描述内容，不可空"
 
//以下为提交到远程仓库的命令
//添加远程仓库地址，就是在github上新建的仓库地址链接
git remote add [自定义一个版本名称如“test”] [对应仓库的网址]
 
//提交
git push -u [自定义的版本名称，同上为“test”] master
 
//之后，输入用户，密码，即可提交，完成后，去github网站上刷新一次就知道了
————————————————
版权声明：本文为CSDN博主「J_Anson」的原创文章，遵循 CC 4.0 BY-SA 版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/J_Anson/article/details/59810159
