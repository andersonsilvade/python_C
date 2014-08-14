def anagrama(str1,str2):
    for k in str1:
        if len(str1)==len(str2):
            str1 = str1.sort()
            
    for x in str2:
        str2=str2.sort()

        
        if str1==str2:
               return True      
    return False
