# from you tubes: https://www.youtube.com/watch?v=zS0HyfN7Pm4&t=1s&ab_channel=SebastiaanMath%C3%B4t

class PortisHead:
    # this inits objects of the class
    def __init__(self):
        print("portishead")
        
# KanyeWest inherits the Portishead class
class KanyeWest(PortisHead):
    def __init__(self):
        print("kanye west")
        super().__init__()
        

class ASAPRocky(PortisHead):
    def __init__(self):
        print("A$AP Rocky")
        super().__init__()

# this is multiple inheritence
class ASAPSebbie(ASAPRocky, KanyeWest):
    def __init__(self):
        print('A$AP Sebbie')
        super().__init__()

# ASAPSebbie calls ASAPRocky, calls KanyeWsts, Calls Portishead
asap_sebbie = ASAPSebbie()