# https://www.codewars.com/kata/5970915e54c27bd71000007b

import math 

def stereometry(r,h):
    sphereArea  = round((4 * math.pi * (r ** 2)), 3)
    sectionRadius = math.sqrt((r ** 2) - (h ** 2))
    sectionArea = round((math.pi * (sectionRadius ** 2)), 3)
    sectionPerimeter = round((2 * math.pi * sectionRadius), 3)
    return (sphereArea, sectionArea, sectionPerimeter)
