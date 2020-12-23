# https://www.codewars.com/kata/56de82fb9905a1c3e6000b52

class Phone:
    def __init__(self, ring = "", screen = "", microphone = ""):
        self.ring = ring
        self.screen = screen
        self.microphone = microphone
        self.currentContact = None

    def searchContact(self, number):
        for contact in contacts:
            if contact['number'] == number:
                return contact
        return None

    def incomingcall(self, incomingNumber):
        self.currentContact = self.searchContact(incomingNumber)

        if self.currentContact != None:
            self.ring = self.currentContact['ring']
            self.screen = "Call: {}\nNumber: {}".format(self.currentContact['name'], self.currentContact['number'])
        else:
            self.ring = "Di Da Di"
            self.screen = "Call: stranger\nNumber: {}".format(incomingNumber)

    def connect(self):
        self.ring = ""
        self.screen = ""

        if self.currentContact != None:
            self.microphone = "Hello, {}!".format(self.currentContact['name'])
        else:
            self.microphone = "Hello, who is speaking, please?"

    def hangup(self):
        self.ring = ""
        self.screen = ""
        self.microphone = ""
        self.currentContact = None
