# Charitha C - Personal Portfolio

A modern, clean personal portfolio website built with React and Tailwind CSS.

## About

This portfolio website showcases the work and skills of Charitha C, a Computer Science Engineering student from Beechagondanahalli, Hassan District. The website features a modern design with soft blue and gray tones, responsive layout, and smooth scrolling navigation.

## Features

- **Responsive Design**: Works seamlessly on desktop, tablet, and mobile devices
- **Modern UI**: Clean design with soft blue and gray color scheme
- **Smooth Navigation**: Fixed navigation with smooth scrolling between sections
- **Interactive Elements**: Hover effects and smooth transitions
- **Contact Form**: Functional contact form for inquiries

## Sections

1. **Home**: Welcome section with introduction and call-to-action buttons
2. **About Me**: Educational background and career goals
3. **Skills**: Technical skills with visual progress bars (C, Java, Python, SQL, DBMS)
4. **Projects**: Showcase of completed and upcoming projects
5. **Contact**: Contact information and message form

## Technologies Used

- **React**: JavaScript library for building the user interface
- **Tailwind CSS**: Utility-first CSS framework for styling
- **Inter Font**: Modern, readable typography
- **SVG Icons**: Scalable vector icons for better visual appeal

## Getting Started

### Prerequisites

- Node.js (version 14 or higher)
- npm or yarn package manager

### Installation

1. Clone the repository:
   ```bash
   git clone <repository-url>
   cd charitha-portfolio
   ```

2. Install dependencies:
   ```bash
   npm install
   ```

3. Start the development server:
   ```bash
   npm start
   ```

4. Open your browser and navigate to `http://localhost:3000`

### Building for Production

To create a production build:

```bash
npm run build
```

The build files will be generated in the `build` directory.

## Project Structure

```
charitha-portfolio/
├── public/
│   ├── index.html
│   └── favicon.ico
├── src/
│   ├── App.js          # Main application component
│   ├── App.css         # Application styles
│   ├── index.js        # Entry point
│   └── index.css       # Global styles with Tailwind directives
├── tailwind.config.js  # Tailwind CSS configuration
├── postcss.config.js   # PostCSS configuration
└── package.json        # Project dependencies and scripts
```

## Customization

### Colors
The website uses a blue and gray color scheme. To modify colors, update the Tailwind classes in `src/App.js`:
- Primary blue: `blue-600`
- Light blue: `blue-50`
- Gray tones: `gray-50`, `gray-100`, `gray-600`, `gray-900`

### Content
Update the personal information in `src/App.js`:
- Name and introduction in the Home section
- Educational background in the About section
- Skills and proficiency levels in the Skills section
- Project details in the Projects section
- Contact information in the Contact section

### Styling
Modify `src/index.css` for global styles or update Tailwind classes in components for specific styling changes.

## Browser Support

This website is compatible with all modern browsers including:
- Chrome (latest)
- Firefox (latest)
- Safari (latest)
- Edge (latest)

## Contact

**Charitha C**
- Email: charithachandrappa13@gmail.com
- Location: Beechagondanahalli, Hassan District, Karnataka, India

## License

This project is open source and available under the [MIT License](LICENSE).

---

Built with ❤️ using React and Tailwind CSS
