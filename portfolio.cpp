<!DOCTYPE html>
<html lang="eng"> 
    <head> 
        <meta charset="UTF-8"> 
        <meta http-equiv="X-UA-Compatible" content="IE=edge"> 
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@3.4.1/dist/css/bootstrap.min.css" integrity="sha384-HSMxcRTRxnN+Bdg0JdbxYKrThecOKuH5zCYotlSAcp1+c8xmyTe9GYg1l9a69psu" crossorigin="anonymous">
        <link rel = "stylesheet" href = "portfoliostyle.css"> 
        <title> Portfolio </title>
        <!-- box icons -->
        <link href='https://unpkg.com/boxicons@2.1.4/css/boxicons.min.css' rel='stylesheet'>
        

    </head>
    <body> 
        <!-- header design -->
        <header class = "header"> 
            <a href ="#" class ="logo">Portfolio</a>
            <i class='bx bx-menu' id="menu-icon-" ></i>
            <nav class = "navbar">
                <a href="#home" class="active">Home</a>
                <a href="#about">About</a>
                <a href="#portfolio">Portfolio</a>
                <a href="#contact">Contact</a>
            </nav>
        </header>
        <!-- home section design -->
        <section class="home" id="home"> 
            <div class="home-content">
                <h3>Hello, It's me</h3>
                <h1>Drishya Pradhan</h1>
                <h3>And I am a <span id="typing"> Computer Science Student</span></h3>
                <p> Lorem ipsum dolor sit amet consectetur adipisicing elit. Nostrum fugiat perferendis hic similique neque aliquid ratione accusamus.</p>
                <div class="social-media">
                    <a href="#"><i class='bx bxl-facebook' ></i></a>
                    <a href="#"><i class='bx bxl-twitter'></i></a>
                    <a href="#"><i class='bx bxl-instagram' ></i></a>
                    <a href="#"><i class='bx bxl-linkedin' ></i></a>
                </div>
                <a href="#" class ="btn">Download CV</a>
            </div>
            <div class="home-img"> 
                <img src="C:\Users\DRISHYA\Pictures\home3.png" alt=""> 
            </div>

        </section>

        <!-- about section design -->
        <section class="about" id="about">
            <div class="about-img">
                <img src="C:\Users\DRISHYA\Pictures\home.png" alt="aboutimg">
            </div>
            <div class="about-content">
                <h2 class="heading"> About <span>Me</span></h2>
                <h3>Second-year Computer Science Student at Miami University </h3>
                <p>Lorem ipsum dolor sit amet consectetur adipisicing elit. Beatae deleniti consequatur facilis!</p>
                <a href="#" class="btn">Read More</a>
            </div>

        </section>
        <!-- portfolio section -->
        <section class="portfolio" id="portfolio">
            <h2 class="heading">Latest <span>Projects</span></h2>
            <div class="portfolio-container">
                <div class="portfolio-box">
                    <img src="C:\Users\DRISHYA\Pictures\web.jpg" alt="">
                    <div class="portfolio-layer">
                        <h4>Web Design</h4>
                        <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit. Nostrum neque aliquam sint.</p>
                        <a href="#"><i class='bx bx-link-external'></i></a>
                    </div>

                </div>
                <div class="portfolio-box">
                    <img src="C:\Users\DRISHYA\Pictures\web2.jpg" alt="">
                    <div class="portfolio-layer">
                        <h4>Web Design</h4>
                        <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit. Nostrum neque aliquam sint.</p>
                        <a href="#"><i class='bx bx-link-external'></i></a>
                    </div>

                </div>
                <div class="portfolio-box">
                    <img src="C:\Users\DRISHYA\Pictures\web3.jpg" alt="">
                    <div class="portfolio-layer">
                        <h4>Web Design</h4>
                        <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit. Nostrum neque aliquam sint.</p>
                        <a href="#"><i class='bx bx-link-external'></i></a>
                    </div>

                </div>
            </div>
        </section>
        <!-- contact section design-->
        <section class="contact" id="contact">
        <h2 class="heading">Contact <span>Me!</span></h2>
        <form action="#">
            <div class="input-box">
                <input type="text" placeholder="Full Name">
                <input type="email" placeholder="Email Address">
            </div>
            <div class="input-box">
                <input type="number" placeholder="Phone Number">
                <input type="text" placeholder="Email Subject">
            </div>
            <textarea name="" id="" cols="30" rows="10" placeholder="Your Message"></textarea>
            <input type="submit" value="Send Message" class="btn">
        </form>
    </section>
    <!-- footer design -->
    <div class="footer-text">
        <p>Copyright &copy; 2023 by DrishyaP | All Rights Reserved.</p>
    </div>
    <div class="foot-icontop">
        <a href="#home"><i class='bx bx-up-arrow-alt' ></i></a>
    </div>
</body>

