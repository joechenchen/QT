#MainWindow  
setCentralWidget   可以设置任意中心部件  
example  
MyDialog = new QDialog();  
setCentralWidget(MyDialog);  


设置字体大小  
QFont font;  
font.setPointSize(28);    
setFont(font)  

QLineEdit  
搜索输入框，没有文字显示时显示“电影、影人”，有文字输入后不会再看到这几个字。
QLineEdit->setPlaceholderText("电影、影人");  
  
setEchoMode()设置模式  
1、默认，输入什么是什么  
setEchoMode(QLineEdit::Normal);  
2、密码，一般是用小黑点覆盖你所输入的字符  
setEchoMode(QLineEdit::PasswordEchoOnEdit);  
3、任何输入都看不见（只是看不见，不是不能输入);  
setEchoMode(QLineEdit::NoEcho);  
  
setAlignment()设置文本位置  
1、setAlignment(QT::AlignLeft);  
2、setAlignment(QT::AlignCentre);  
3、setAlignment(QT::AlignRight);  
  
setReadOnly()设置能否编辑  
  
setfocus 设置焦点，比如触发按钮之间后，使用该函数可以让光标回到文本框。