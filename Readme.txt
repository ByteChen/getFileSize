Usage: Get large files' size, up to 2^64 = (2^34)G !!

用途：获取大型文件的体积，基本无论多大都能算出体积。而一般的fseek()+ftell()的组合combo只能算出4G或8G（视系统位数而定）以内的文件体积。

My Blog: http://blog.csdn.net/xdczj/article/details/53044779