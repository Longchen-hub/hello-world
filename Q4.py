import turtle as t
t.setup(500,500)
x=0
for i in range(18):
    t.seth(x)
    x += 20
    t.left(90)
    t.fd(100)
    t.right(90)
    t.fd(100)
    t.right(90)
    t.fd(200)
    t.right(90)
    t.fd(200)
    t.right(90)
    t.fd(200)
    t.right(90)
    t.fd(100)
    t.right(90)
    t.fd(100)
t.done()
