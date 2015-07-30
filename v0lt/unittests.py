import unittest
from v0lt.crypto_utils import *
from v0lt.v0lt_utils import flags_gen
from v0lt.netcat import Netcat
from v0lt.telnet import Telnet
from v0lt.stack import Stack
import v0lt.shellcode

__author__ = 'lejay'


class Tests(unittest.TestCase):
    def test_netcat(self):
        nc = Netcat("archpichu.ddns.net", 65103)
        self.assertEqual(nc.read(1, verbose=True), "Nothing to display yet...\n")

    def test_telnet(self):
        tl = Telnet("archpichu.ddns.net", 65103)
        self.assertEqual(tl.read(1, verbose=True), "Nothing to display yet...\n")

    def test_stack(self):
        stack = Stack()
        self.assertEqual(stack.size(), 0)
        stack.push("item")
        self.assertEqual(stack.is_empty(), False)
        self.assertEqual(stack.size(), 1)
        item = stack.pop()
        self.assertEqual(stack.size(), 0)
        self.assertEqual(item, "item")
        self.assertEqual(stack.is_empty(), True)

    def test_basic_ceasar(self):
        plaintext = "This is a ceasar plaintext"
        encrypted = "GUVF VF N PRNFNE CYNVAGRKG"
        deciphered = basic_ceasar(plaintext, offset=13)
        self.assertEqual(encrypted, deciphered)

    # def test_get_shellcode(self):
    #     shellcode.get_shellcodes("x86", "bin/sh")

    # def test_flag_gen(self):
    #     flags_gen("test.tmp", "myCTF", 10)

if __name__ == "__main__":
    suite = unittest.defaultTestLoader.loadTestsFromTestCase(Tests)
    unittest.TextTestRunner().run(suite)