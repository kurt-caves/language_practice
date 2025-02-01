# from you tubes: https://www.youtube.com/watch?v=zS0HyfN7Pm4&t=1s&ab_channel=SebastiaanMath%C3%B4t

class PortisHead:
    # this inits objects of the class
    def __init__(self):
        print("portishead")
        
# KanyeWest inherits the Portishead class
class KanyeWest(PortisHead):
    def __init__(self):
        print("kanye west")
        # object inheritance 
        # calls the init function of portishead class
        # so that portishead will print 
        PortisHead.__init__(self)
        

        # ^^^^so this will do the same thing as above^^^^
        # super().__init__()
        # this is the same as above ^^
        # super(KanyeWest, self).__init__()

class ASAPRocky(PortisHead):
    def __init__(self):
        print("A$AP Rocky")
        PortisHead.__init__(self)

# this is multiple inheritence
class ASAPSebbie(ASAPRocky, KanyeWest):
    def __init__(self):
        print('A$AP Sebbie')
        ASAPRocky.__init__(self)
        KanyeWest.__init__(self)



# object     # class
# use this convention to be able to tell
# what is an object and what is a class
asap_sebbie = ASAPSebbie()
# ^^^ this prints^^^
    # A$AP Sebbie
    # A$AP Rocky
    # portishead
    # kanye west
    # portishead
# this not what we want, we want a diamond structure and to not print portis head more than once
