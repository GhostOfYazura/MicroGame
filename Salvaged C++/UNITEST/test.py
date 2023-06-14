import random
from subprocess import Popen
import subprocess
from sys import stdout
from time import sleep

from scipy import rand

target = "a.exe"
runTest = 5

while (runTest > 0):
    b = random.randrange(5,100)
    a = random.randrange(0,10)
    while (b <= a):
        b = random.randrange(5,100)

    stringInput = str(a) + " " + str(b)
    TestExe = subprocess.Popen(["a.exe $a"], stdout=subprocess.PIPE, stdin=subprocess.PIPE, shell=True)
    TestExe.communicate(input=str(b).encode())[0]
    #TestExe.communicate(input=str(b).encode())[0]
    TestExe.communicate()
    #subprocess.call("a.exe", stdin=stringInput)
    #os.startfile("a.exe")
    #subprocess.call([str(a) + " " + str(b)])
    #sys.stdout.write(str(a) + " " + str(b))
    #os.startfile("a.exe")
    #os.system(str(a))
    #os.system(str(b))
    sleep(0.3)
    runTest = runTest - 1
    