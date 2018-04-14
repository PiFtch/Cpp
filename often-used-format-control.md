// often used stream format control symbol

setw(width)      指定字段宽度                                                 对之后一个输出起作用，默认右对齐
setprecision(n)  指定浮点数精度(包含整数位及小数位共n位)                        作用一直保持到下一个setprecision之前
fixed            将浮点数以定点数形式输出(非科学记数法)                         当与setprecision合用时，指定小数位n位，作用域同上
showpoint        将浮点数以带小数点、带结尾0的形式输出(即使它没有小数部分)        与setprecision合用，整数位和小数位共n位
left             左对齐                                                      默认右对齐
right            右对齐                                                      默认右对齐