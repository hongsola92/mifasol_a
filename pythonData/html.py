import urllib.request

url = "/home/ssorra/mifasol_a/pythonData/78285681?v=4"

print("Start Download")
frame, header = urllib.request.urlretrieve(url, "78285681?v=4")


print("End Download")